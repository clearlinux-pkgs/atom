#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void *av_buffer_create(uint8_t *data, int size, void (*free)(void *opaque, uint8_t *data), void *opaque, int flags)
{
	return NULL;
}


void *av_buffer_get_opaque(const void *buf)
{
	return NULL;
}


void avcodec_align_dimensions(void *s, int *width, int *height)
{
	*width = 0;
	*height = 0;
}

void *avcodec_alloc_context3(const void *codec)
{
	return NULL;
}

int avcodec_decode_audio4(void *avctx, void *frame, int *got_frame_ptr, const void *avpkt)
{
	return -1;
}

int avcodec_decode_video2(void *avctx, void *picture, int *got_picture_ptr, const void *avpkt)
{
	return -1;
}

const void *avcodec_descriptor_get(int id)
{
	return NULL;
}

void *avcodec_find_decoder(int id)
{
	return NULL;
}

void avcodec_flush_buffers(void *avctx)
{
}

void avcodec_free_context(void **avctx)
{
	*avctx = NULL;
}

const char *avcodec_get_name(int id)
{
	return "<NONE>";
}

int avcodec_open2(void *avctx, const void *codec, void **options)
{
	return -1;
}

int avcodec_parameters_to_context(void *codec, const void *par)
{
	return -1;
}

void av_dict_free(void **m)
{
	*m = NULL;
}

void *av_dict_get(const void *m, const char *key, const void *prev, int flags)
{
	return NULL;
}

int av_dict_set(void **pm, const char *key, const char *value, int flags)
{
	return -1;
}

void *avformat_alloc_context(void)
{
	return NULL;
}

void avformat_close_input(void **s)
{
	*s = NULL;
}

int avformat_find_stream_info(void *ic, void **options)
{
	return -1;
}

void avformat_free_context(void *s)
{

}

int avformat_open_input(void **ps, const char *url, void *fmt, void **options)
{
	return -1;
}

void *av_frame_alloc(void)
{
	return NULL;
}

void av_frame_free(void **frame)
{
	*frame = NULL;
}

void av_frame_unref(void *frame)
{
}

void av_free(void *ptr)
{
}

void *av_malloc(size_t size)
{
	return NULL;
}

void av_max_alloc(size_t max)
{
}

int av_get_bytes_per_sample(int sample_fmt)
{
	return 0;
}

int av_image_check_size(unsigned int w, unsigned int h, int log_offset, void *log_ctx)
{
	return -1;
}

void av_init_packet(void *pkt)
{
}

void *avio_alloc_context(
                  unsigned char *buffer,
                  int buffer_size,
                  int write_flag,
                  void *opaque,
                  int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int64_t (*seek)(void *opaque, int64_t offset, int whence))
{
	return NULL;
}

int av_lockmgr_register(int (*cb)(void **mutex, int op))
{
	return 0;
}


void av_log_set_level(int level)
{
}


int av_new_packet(void *pkt, int size)
{
	return -1;
}

int av_packet_copy_props(void *dst, const void *src)
{
	return -1;
}

uint8_t* av_packet_get_side_data(const void *pkt, int type, int *size)
{
	return NULL;
}

int av_packet_split_side_data(void *pkt)
{
	return -1;
}

void av_packet_unref(void *pkt)
{
}

void av_rdft_calc(void *s, void *data)
{
}

void av_rdft_end(void *s)
{
}

void *av_rdft_init(int nbits, int trans)
{
	return NULL;
}

int av_read_frame(void *s, void *pkt)
{
	return -1;
}

int av_seek_frame(void *s, int stream_index, int64_t timestamp, int flags)
{
	return -1;
}

void av_register_all(void)
{
}


int64_t av_rescale_q(int64_t a, int64_t bq, int64_t cq)
{
	return 0;
}

int av_samples_get_buffer_size(int *linesize, int nb_channels, int nb_samples, int sample_fmt, int align)
{
	return -1;
}


int av_strerror(int errnum, char *errbuf, size_t errbuf_size)
{
	strcpy(errbuf, "NONE");
}

int av_get_cpu_flags(void)
{
	return -1;
}

