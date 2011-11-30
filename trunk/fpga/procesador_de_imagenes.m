imagen = imread('D:\imagen.jpg');
[m, n] = size(imagen);
imshow(imagen);


PS=serial('COM3');
set(PS,'Baudrate',19200); % se configura la velocidad a 9600 Baudios
set(PS,'StopBits',1); % se configura bit de parada a uno
set(PS,'DataBits',8); % se configura que el dato es de 8 bits, debe estar entre 5 y 8
set(PS,'Parity','none'); % se configura sin paridad
set(PS,'OutputBufferSize',1); % ”n” es el número de bytes a enviar
set(PS,'InputBufferSize' ,1); % ”n” es el número de bytes a recibir
set(PS,'Timeout',5); % 5 segundos de tiempo de espera

fopen(PS);

imagen2 = imagen;

for i=1:n
	for j=1:m
		original = imagen(i,j);
		fwrite(PS, original, 'uint8');
		saturado = fread(PS, 1, 'uint8');
		imagen2(i,j) = saturado; 
	end
end

imwrite(imagen2, 'D:\data2.jpg') ;




%fwrite(PS, original, 'uint8');


%fread(PS, saturado, 'uint8');







%imagen(100,100,1);R
%imagen(100,100,2);G
%imagen(100,100,3);B
