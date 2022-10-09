#define _WIN32_WINNT _WIN32_WINNT_WIN7
#define WINVER _WIN32_WINNT_WIN7

#include <helpers/foobar2000+atl.h>

#pragma once
#include <iostream>
#include <string>
using namespace::std;
using std::string;

#include <windowsx.h>

#define ID_TIMER2 1011

static constexpr const char* component_name = "Statistics";

DECLARE_COMPONENT_VERSION(
	component_name,
	"1.0",
	"grimes\n\n"
	"Build: " __TIME__ ", " __DATE__
);

VALIDATE_COMPONENT_FILENAME("foo_statistics.dll");

t_uint32 playback_new_track;
t_uint32 playback_stop;
t_uint32 stop_reason;
t_uint32 playback_seek;
double seek_time;
t_uint32 playback_pause;
t_uint32 playback_starting;
t_uint32 playback_command;
t_uint32 playback_command0;
t_uint32 playback_command1;
t_uint32 playback_command2;
t_uint32 playback_command3;
t_uint32 playback_command4;
t_uint32 playback_command5;
t_uint32 playback_command6;
t_uint32 playback_edited;
t_uint32 playback_dynamic_info;
t_uint32 playback_dynamic_info_track;
double playback_time;
t_uint32 volume_change;
float volume_new_value;
t_uint32 p_reason0;
t_uint32 p_reason1;
t_uint32 p_reason2;
t_uint32 p_reason3;
double total_playback_time;
double startup_time;
double idle_time;
t_uint32 item_played;

t_uint32 items_selection_change;
t_uint32 playlist_activate;
t_uint32 playback_order_changed;
t_uint32 playlist_created;
t_uint32 playlist_renamed;
t_uint32 playlists_removed;
t_uint32 playlists_reorder;

t_uint32 sum;

UINT ptr20;

pfc::string8 tag1;
pfc::string8 tag2;
pfc::string8 tag3;
pfc::string8 tag4;
pfc::string8 tag5;
pfc::string8 tag6;
pfc::string8 tag7;
pfc::string8 tag8;
pfc::string8 tag9;
pfc::string8 tag10;
pfc::string8 tag11;

pfc::string8 a_rating;
pfc::string8 a_playcount;
pfc::string8 a_bitrate;
pfc::string8 a_filesize;
pfc::string8 a_tracklength;
pfc::string8 a_date;
pfc::string8 a_samplerate;
pfc::string8 a_bitspersample;
pfc::string8 a_channels;
pfc::string8 a_encoding;
pfc::string8 a_codec;
pfc::string8 a_version;

pfc::string8 version;

t_uint32 sum_rating;
t_uint32 sum_playcount;
t_uint32 bitrate;
t_uint32 sum_bitrate;
t_uint32 sum_filesize;
t_uint32 sum_tracklength;
t_uint32 date;
t_uint32 sum_date;
t_uint32 samplerate;
t_uint32 bitspersample;
t_uint32 channels;
t_uint32 compression;
t_uint32 sum_compression;

t_uint32 lossless;
t_uint32 lossy;
double lossless_percent;
double lossy_percent;
double total_lossless_percent;
double total_lossy_percent;

t_uint32 mono;
t_uint32 stereo;
t_uint32 other;
double mono_percent;
double stereo_percent;
double total_mono_percent;
double total_stereo_percent;

t_uint32 sample11025;
t_uint32 sample22050;
t_uint32 sample44100;
t_uint32 sample48000;
t_uint32 sample88200;
t_uint32 sample96000;
t_uint32 sample192000;
t_uint32 sampleother;
double sample44100_percent;
double sample48000_percent;
double total_sample44100_percent;
double total_sample48000_percent;

t_uint32 bits8;
t_uint32 bits12;
t_uint32 bits16;
t_uint32 bits24;
t_uint32 bits32;
t_uint32 bitsother;
double bits16_percent;
double bits24_percent;
double total_bits16_percent;
double total_bits24_percent;

t_uint32 cdda;
t_uint32 shorten;
t_uint32 flac;
t_uint32 mp3;
t_uint32 mp2;
t_uint32 pcm;
t_uint32 monkeys;
t_uint32 tak;
t_uint32 alac;
t_uint32 musepack;
t_uint32 optimfrog;
t_uint32 dualstream;
t_uint32 vorbis;
t_uint32 speex;
t_uint32 trueaudio;
t_uint32 wavpack;
t_uint32 wma;
t_uint32 aac;
t_uint32 othercodec;

SYSTEMTIME systime;

double average_trackplaybacktime;
double average_rating;
double average_playcount;
double average_bitrate;
t_uint32 average_filesize;
double average_tracklength;
t_uint32 average_date;
t_uint32 average_compression;
double playbacktime_percent;

double total_average_trackplaybacktime;
double total_average_rating;
double total_average_playcount;
double total_average_bitrate;
t_uint32 total_average_filesize;
double total_average_tracklength;
double total_average_date;
t_uint32 total_average_compression;
double total_playbacktime_percent;

t_uint32 library_items_added_count;
t_uint32 library_items_modified_count;
t_uint32 library_items_removed_count;
t_uint32 library_items_added;
t_uint32 library_items_modified;
t_uint32 library_items_removed;

pfc::string8 playback_stop_reason;
pfc::string8 starting_command;

// {DEF63D6B-02A6-46BC-88CF-BF06517452FF}
static const GUID guid_cfg_playback_new_track = { 0xdef63d6b, 0x2a6, 0x46bc, { 0x88, 0xcf, 0xbf, 0x6, 0x51, 0x74, 0x52, 0xff } };
cfg_uint cfg_playback_new_track(guid_cfg_playback_new_track, 0);

// {AB7B1B72-EFDB-4A7C-9871-FE41EDAA1529}
static const GUID guid_cfg_playback_new_track_average = { 0xab7b1b72, 0xefdb, 0x4a7c, { 0x98, 0x71, 0xfe, 0x41, 0xed, 0xaa, 0x15, 0x29 } };
cfg_uint cfg_playback_new_track_average(guid_cfg_playback_new_track_average, 0);

// {BDF4C91B-2D4B-4F39-9480-19A72386A0FC}
static const GUID guid_cfg_playback_stop = { 0xbdf4c91b, 0x2d4b, 0x4f39, { 0x94, 0x80, 0x19, 0xa7, 0x23, 0x86, 0xa0, 0xfc } };
cfg_uint cfg_playback_stop(guid_cfg_playback_stop, 0);

// {3A43B079-1033-41C5-B691-528659FBF1AC}
static const GUID guid_cfg_playback_seek = { 0x3a43b079, 0x1033, 0x41c5, { 0xb6, 0x91, 0x52, 0x86, 0x59, 0xfb, 0xf1, 0xac } };
cfg_uint cfg_playback_seek(guid_cfg_playback_seek, 0);

// {807737A6-F7C1-4F6F-B9DA-70EDD21377B4}
static const GUID guid_cfg_playback_pause = { 0x807737a6, 0xf7c1, 0x4f6f, { 0xb9, 0xda, 0x70, 0xed, 0xd2, 0x13, 0x77, 0xb4 } };
cfg_uint cfg_playback_pause(guid_cfg_playback_pause, 0);

// {11038418-CC23-45F3-A4BE-E8939983E24F}
static const GUID guid_cfg_playback_starting = { 0x11038418, 0xcc23, 0x45f3, { 0xa4, 0xbe, 0xe8, 0x93, 0x99, 0x83, 0xe2, 0x4f } };
cfg_uint cfg_playback_starting(guid_cfg_playback_starting, 0);

// {0961ADA1-EBCD-45FA-958F-693349DED30C}
static const GUID guid_cfg_playback_command0 = { 0x961ada1, 0xebcd, 0x45fa, { 0x95, 0x8f, 0x69, 0x33, 0x49, 0xde, 0xd3, 0xc } };
cfg_uint cfg_playback_command0(guid_cfg_playback_command0, 0);

// {7EA8A05A-4C46-40FE-A947-264E7BC7BD77}
static const GUID guid_cfg_playback_command1 = { 0x7ea8a05a, 0x4c46, 0x40fe, { 0xa9, 0x47, 0x26, 0x4e, 0x7b, 0xc7, 0xbd, 0x77 } };
cfg_uint cfg_playback_command1(guid_cfg_playback_command1, 0);

// {D5D20FE6-9343-4057-A080-A7CDD28CE4E5}
static const GUID guid_cfg_playback_command2 = { 0xd5d20fe6, 0x9343, 0x4057, { 0xa0, 0x80, 0xa7, 0xcd, 0xd2, 0x8c, 0xe4, 0xe5 } };
cfg_uint cfg_playback_command2(guid_cfg_playback_command2, 0);

// {36067843-ED56-405A-8A9B-86BA43B4ED21}
static const GUID guid_cfg_playback_command3 = { 0x36067843, 0xed56, 0x405a, { 0x8a, 0x9b, 0x86, 0xba, 0x43, 0xb4, 0xed, 0x21 } };
cfg_uint cfg_playback_command3(guid_cfg_playback_command3, 0);

// {C210939C-4ED7-4BEB-802D-73DBD83D4BE8}
static const GUID guid_cfg_playback_command4 = { 0xc210939c, 0x4ed7, 0x4beb, { 0x80, 0x2d, 0x73, 0xdb, 0xd8, 0x3d, 0x4b, 0xe8 } };
cfg_uint cfg_playback_command4(guid_cfg_playback_command4, 0);

// {CD7249EC-B8BA-4B2A-8604-B8374CB71C00}
static const GUID guid_cfg_playback_command5 = { 0xcd7249ec, 0xb8ba, 0x4b2a, { 0x86, 0x4, 0xb8, 0x37, 0x4c, 0xb7, 0x1c, 0x0 } };
cfg_uint cfg_playback_command5(guid_cfg_playback_command5, 0);

// {3550E404-5556-4F8C-841E-40C322836F0E}
static const GUID guid_cfg_playback_command6 = { 0x3550e404, 0x5556, 0x4f8c, { 0x84, 0x1e, 0x40, 0xc3, 0x22, 0x83, 0x6f, 0xe } };
cfg_uint cfg_playback_command6(guid_cfg_playback_command6, 0);

// {881BF4F6-B190-48D1-B599-531675D00FEA}
static const GUID guid_cfg_playback_edited = { 0x881bf4f6, 0xb190, 0x48d1, { 0xb5, 0x99, 0x53, 0x16, 0x75, 0xd0, 0xf, 0xea } };
cfg_uint cfg_playback_edited(guid_cfg_playback_edited, 0);

// {15F822C5-A0D4-4554-9EC9-8FFF91F18C54}
static const GUID guid_cfg_playback_dynamic_info = { 0x15f822c5, 0xa0d4, 0x4554, { 0x9e, 0xc9, 0x8f, 0xff, 0x91, 0xf1, 0x8c, 0x54 } };
cfg_uint cfg_playback_dynamic_info(guid_cfg_playback_dynamic_info, 0);

// {C0FD8A2B-5A5A-4D47-AEF9-FC742CBF5205}
static const GUID guid_cfg_playback_dynamic_info_track = { 0xc0fd8a2b, 0x5a5a, 0x4d47, { 0xae, 0xf9, 0xfc, 0x74, 0x2c, 0xbf, 0x52, 0x5 } };
cfg_uint cfg_playback_dynamic_info_track(guid_cfg_playback_dynamic_info_track, 0);

// {B1ED5360-151A-4CC8-90A3-BDF930A14040}
static const GUID guid_cfg_volume_change = { 0xb1ed5360, 0x151a, 0x4cc8, { 0x90, 0xa3, 0xbd, 0xf9, 0x30, 0xa1, 0x40, 0x40 } };
cfg_uint cfg_volume_change(guid_cfg_volume_change, 0);

// {42B90F7B-7741-49E5-82AC-D4F589272A69}
static const GUID guid_cfg_p_reason0 = { 0x42b90f7b, 0x7741, 0x49e5, { 0x82, 0xac, 0xd4, 0xf5, 0x89, 0x27, 0x2a, 0x69 } };
cfg_uint cfg_p_reason0(guid_cfg_p_reason0, 0);

// {C823984A-589D-4C9D-A787-F9C2261EE089}
static const GUID guid_cfg_p_reason1 = { 0xc823984a, 0x589d, 0x4c9d, { 0xa7, 0x87, 0xf9, 0xc2, 0x26, 0x1e, 0xe0, 0x89 } };
cfg_uint cfg_p_reason1(guid_cfg_p_reason1, 0);

// {3996EDB9-8BA0-4C9D-A110-DC444F7A4267}
static const GUID guid_cfg_p_reason2 = { 0x3996edb9, 0x8ba0, 0x4c9d, { 0xa1, 0x10, 0xdc, 0x44, 0x4f, 0x7a, 0x42, 0x67 } };
cfg_uint cfg_p_reason2(guid_cfg_p_reason2, 0);

// {8FEAB4BB-B1E9-446E-BE69-96ED58B2C3FC}
static const GUID guid_cfg_p_reason3 = { 0x8feab4bb, 0xb1e9, 0x446e, { 0xbe, 0x69, 0x96, 0xed, 0x58, 0xb2, 0xc3, 0xfc } };
cfg_uint cfg_p_reason3(guid_cfg_p_reason3, 0);

// {E092509E-B9DC-4CA0-982D-38449217FF55}
static const GUID guid_cfg_total_playback_time = { 0xe092509e, 0xb9dc, 0x4ca0, { 0x98, 0x2d, 0x38, 0x44, 0x92, 0x17, 0xff, 0x55 } };
cfg_uint cfg_total_playback_time(guid_cfg_total_playback_time, 0);

// {CF85C0F0-CDD5-42F3-964B-C6D3BFFB5C98}
static const GUID guid_cfg_total_playback_time_average = { 0xcf85c0f0, 0xcdd5, 0x42f3, { 0x96, 0x4b, 0xc6, 0xd3, 0xbf, 0xfb, 0x5c, 0x98 } };
cfg_uint cfg_total_playback_time_average(guid_cfg_total_playback_time_average, 0);

// {CF7C1EF8-5EF7-4BC8-9381-E6351FD3B854}
static const GUID guid_cfg_startup_time = { 0xcf7c1ef8, 0x5ef7, 0x4bc8, { 0x93, 0x81, 0xe6, 0x35, 0x1f, 0xd3, 0xb8, 0x54 } };
cfg_uint cfg_startup_time(guid_cfg_startup_time, 0);

// {E59A3EF8-F403-4F7C-9587-4ED7102A4C17}
static const GUID guid_cfg_idle_time = { 0xe59a3ef8, 0xf403, 0x4f7c, { 0x95, 0x87, 0x4e, 0xd7, 0x10, 0x2a, 0x4c, 0x17 } };
cfg_uint cfg_idle_time(guid_cfg_idle_time, 0);

// {70622E33-47AF-461B-A95B-08798366F2BB}
static const GUID guid_cfg_init = { 0x70622e33, 0x47af, 0x461b, { 0xa9, 0x5b, 0x8, 0x79, 0x83, 0x66, 0xf2, 0xbb } };
cfg_uint cfg_init(guid_cfg_init, 1);

// {24984866-CA86-44C2-8F08-190B8ABDE08C}
static const GUID guid_cfg_init2 = { 0x24984866, 0xca86, 0x44c2, { 0x8f, 0x8, 0x19, 0xb, 0x8a, 0xbd, 0xe0, 0x8c } };
cfg_uint cfg_init2(guid_cfg_init2, 1);

// {460AA02C-7E7F-40BA-8D1E-A1F86FF56518}
static const GUID guid_cfg_items_selection_change = { 0x460aa02c, 0x7e7f, 0x40ba, { 0x8d, 0x1e, 0xa1, 0xf8, 0x6f, 0xf5, 0x65, 0x18 } };
cfg_uint cfg_items_selection_change(guid_cfg_items_selection_change, 0);

// {E68BFF57-4475-4354-9584-1628435825F8}
static const GUID guid_cfg_playlist_activate = { 0xe68bff57, 0x4475, 0x4354, { 0x95, 0x84, 0x16, 0x28, 0x43, 0x58, 0x25, 0xf8 } };
cfg_uint cfg_playlist_activate(guid_cfg_playlist_activate, 0);

// {22C49123-FDED-48F2-8947-1FAE5E5BAA80}
static const GUID guid_cfg_playback_order_changed = { 0x22c49123, 0xfded, 0x48f2, { 0x89, 0x47, 0x1f, 0xae, 0x5e, 0x5b, 0xaa, 0x80 } };
cfg_uint cfg_playback_order_changed(guid_cfg_playback_order_changed, 0);

// {CFA5CEE0-9644-4326-99FB-EE2DCB5BF318}
static const GUID guid_cfg_playlist_created = { 0xcfa5cee0, 0x9644, 0x4326, { 0x99, 0xfb, 0xee, 0x2d, 0xcb, 0x5b, 0xf3, 0x18 } };
cfg_uint cfg_playlist_created(guid_cfg_playlist_created, 0);

// {7D81F72F-5870-485F-9844-9FE89F3DB36D}
static const GUID guid_cfg_playlist_renamed = { 0x7d81f72f, 0x5870, 0x485f, { 0x98, 0x44, 0x9f, 0xe8, 0x9f, 0x3d, 0xb3, 0x6d } };
cfg_uint cfg_playlist_renamed(guid_cfg_playlist_renamed, 0);

// {487C134C-C147-46AA-B991-CF3CA38FFDF8}
static const GUID guid_cfg_playlists_removed = { 0x487c134c, 0xc147, 0x46aa, { 0xb9, 0x91, 0xcf, 0x3c, 0xa3, 0x8f, 0xfd, 0xf8 } };
cfg_uint cfg_playlists_removed(guid_cfg_playlists_removed, 0);

// {0F368214-A840-413C-82B4-98D17EA326DB}
static const GUID guid_cfg_playlists_reorder = { 0xf368214, 0xa840, 0x413c, { 0x82, 0xb4, 0x98, 0xd1, 0x7e, 0xa3, 0x26, 0xdb } };
cfg_uint cfg_playlists_reorder(guid_cfg_playlists_reorder, 0);

// {3323B184-8D64-46F1-BCDC-04EFE204C760}
static const GUID guid_cfg_item_played = { 0x3323b184, 0x8d64, 0x46f1, { 0xbc, 0xdc, 0x4, 0xef, 0xe2, 0x4, 0xc7, 0x60 } };
cfg_uint cfg_item_played(guid_cfg_item_played, 0);

// {7442B175-3C4E-455C-9D24-4053C69571D7}
static const GUID guid_cfg_sum = { 0x7442b175, 0x3c4e, 0x455c, { 0x9d, 0x24, 0x40, 0x53, 0xc6, 0x95, 0x71, 0xd7 } };
cfg_uint cfg_sum(guid_cfg_sum, 0);

// Stores sum variables.

// {A0D143BA-71CD-41A5-BDEC-A5BD56ABA160}
static const GUID guid_cfg_sum_rating = { 0xa0d143ba, 0x71cd, 0x41a5, { 0xbd, 0xec, 0xa5, 0xbd, 0x56, 0xab, 0xa1, 0x60 } };
cfg_uint cfg_sum_rating(guid_cfg_sum_rating, 0);

// {05178852-A4E3-4CB3-8F5F-34E43828CB1F}
static const GUID guid_cfg_sum_playcount = { 0x5178852, 0xa4e3, 0x4cb3, { 0x8f, 0x5f, 0x34, 0xe4, 0x38, 0x28, 0xcb, 0x1f } };
cfg_uint cfg_sum_playcount(guid_cfg_sum_playcount, 0);

// {360E80A4-191E-492D-808E-E4474CED4CEA}
static const GUID guid_cfg_sum_bitrate = { 0x360e80a4, 0x191e, 0x492d, { 0x80, 0x8e, 0xe4, 0x47, 0x4c, 0xed, 0x4c, 0xea } };
cfg_uint cfg_sum_bitrate(guid_cfg_sum_bitrate, 0);

// {34F19FA1-465B-4CCF-BB6B-0D28770F8D06}
static const GUID guid_cfg_sum_filesize = { 0x34f19fa1, 0x465b, 0x4ccf, { 0xbb, 0x6b, 0xd, 0x28, 0x77, 0xf, 0x8d, 0x6 } };
cfg_uint cfg_sum_filesize(guid_cfg_sum_filesize, 0);

// {A5AEAC25-432A-40DB-A867-0EDF2DD8F837}
static const GUID guid_cfg_sum_tracklength = { 0xa5aeac25, 0x432a, 0x40db, { 0xa8, 0x67, 0xe, 0xdf, 0x2d, 0xd8, 0xf8, 0x37 } };
cfg_uint cfg_sum_tracklength(guid_cfg_sum_tracklength, 0);

// {2EAB23EE-86B7-4D91-9EAD-7D65F9D1E397}
static const GUID guid_cfg_sum_date = { 0x2eab23ee, 0x86b7, 0x4d91, { 0x9e, 0xad, 0x7d, 0x65, 0xf9, 0xd1, 0xe3, 0x97 } };
cfg_uint cfg_sum_date(guid_cfg_sum_date, 0);

// {311BD07E-32A7-4483-AE03-EB39FF2FCB84}
static const GUID guid_cfg_sum_compression = { 0x311bd07e, 0x32a7, 0x4483, { 0xae, 0x3, 0xeb, 0x39, 0xff, 0x2f, 0xcb, 0x84 } };
cfg_uint cfg_sum_compression(guid_cfg_sum_compression, 0);

// {56BA431F-A7ED-4C9F-BF6A-A00E008C513E}
static const GUID guid_cfg_lossless = { 0x56ba431f, 0xa7ed, 0x4c9f, { 0xbf, 0x6a, 0xa0, 0xe, 0x0, 0x8c, 0x51, 0x3e } };
cfg_uint cfg_lossless(guid_cfg_lossless, 0);

// {7030D59C-29EF-4F83-842D-073E995DC5CC}
static const GUID guid_cfg_lossy = { 0x7030d59c, 0x29ef, 0x4f83, { 0x84, 0x2d, 0x7, 0x3e, 0x99, 0x5d, 0xc5, 0xcc } };
cfg_uint cfg_lossy(guid_cfg_lossy, 0);

// {D9E45778-DCDB-46C4-9AF6-905FF7834092}
static const GUID guid_cfg_mono = { 0xd9e45778, 0xdcdb, 0x46c4, { 0x9a, 0xf6, 0x90, 0x5f, 0xf7, 0x83, 0x40, 0x92 } };
cfg_uint cfg_mono(guid_cfg_mono, 0);

// {D6CDED74-0BDE-42EE-A47A-10EDFE405CA1}
static const GUID guid_cfg_stereo = { 0xd6cded74, 0xbde, 0x42ee, { 0xa4, 0x7a, 0x10, 0xed, 0xfe, 0x40, 0x5c, 0xa1 } };
cfg_uint cfg_stereo(guid_cfg_stereo, 0);

// {DBF6FB33-DC61-4F38-A384-759957672F2C}
static const GUID guid_cfg_other = { 0xdbf6fb33, 0xdc61, 0x4f38, { 0xa3, 0x84, 0x75, 0x99, 0x57, 0x67, 0x2f, 0x2c } };
cfg_uint cfg_other(guid_cfg_other, 0);

// {0826E269-20ED-4ECA-9B61-706FB353ABDB}
static const GUID guid_cfg_sample11025 = { 0x826e269, 0x20ed, 0x4eca, { 0x9b, 0x61, 0x70, 0x6f, 0xb3, 0x53, 0xab, 0xdb } };
cfg_uint cfg_sample11025(guid_cfg_sample11025, 0);

// {7D009ADE-937D-4714-A745-AE915FD75B91}
static const GUID guid_cfg_sample22050 = { 0x7d009ade, 0x937d, 0x4714, { 0xa7, 0x45, 0xae, 0x91, 0x5f, 0xd7, 0x5b, 0x91 } };
cfg_uint cfg_sample22050(guid_cfg_sample22050, 0);

// {018672EE-512C-420F-8AC3-D9EB8DC4B5A1}
static const GUID guid_cfg_sample44100 = { 0x18672ee, 0x512c, 0x420f, { 0x8a, 0xc3, 0xd9, 0xeb, 0x8d, 0xc4, 0xb5, 0xa1 } };
cfg_uint cfg_sample44100(guid_cfg_sample44100, 0);

// {98C275DA-2EB5-4DC7-9B48-2D88BD591959}
static const GUID guid_cfg_sample48000 = { 0x98c275da, 0x2eb5, 0x4dc7, { 0x9b, 0x48, 0x2d, 0x88, 0xbd, 0x59, 0x19, 0x59 } };
cfg_uint cfg_sample48000(guid_cfg_sample48000, 0);

// {DFE5F4A6-DF1E-4EB7-BC00-691E5F9AF15A}
static const GUID guid_cfg_sample88200 = { 0xdfe5f4a6, 0xdf1e, 0x4eb7, { 0xbc, 0x0, 0x69, 0x1e, 0x5f, 0x9a, 0xf1, 0x5a } };
cfg_uint cfg_sample88200(guid_cfg_sample88200, 0);

// {AE205212-521A-4FC0-BA4B-BB25DCF0C325}
static const GUID guid_cfg_sample96000 = { 0xae205212, 0x521a, 0x4fc0, { 0xba, 0x4b, 0xbb, 0x25, 0xdc, 0xf0, 0xc3, 0x25 } };
cfg_uint cfg_sample96000(guid_cfg_sample96000, 0);

// {F01A2EF3-6655-4C21-B945-8ED4F6ADDB02}
static const GUID guid_cfg_sample192000 = { 0xf01a2ef3, 0x6655, 0x4c21, { 0xb9, 0x45, 0x8e, 0xd4, 0xf6, 0xad, 0xdb, 0x2 } };
cfg_uint cfg_sample192000(guid_cfg_sample192000, 0);

// {0F198D20-CECB-4CA7-BE74-94C2C8F7AE2A}
static const GUID guid_cfg_sampleother = { 0xf198d20, 0xcecb, 0x4ca7, { 0xbe, 0x74, 0x94, 0xc2, 0xc8, 0xf7, 0xae, 0x2a } };
cfg_uint cfg_sampleother(guid_cfg_sampleother, 0);

// {26D4A9B9-C9A9-40EB-ABD4-8AA8CEBF52CA}
static const GUID guid_cfg_bits8 = { 0x26d4a9b9, 0xc9a9, 0x40eb, { 0xab, 0xd4, 0x8a, 0xa8, 0xce, 0xbf, 0x52, 0xca } };
cfg_uint cfg_bits8(guid_cfg_bits8, 0);

// {30853FAC-B9FE-44E6-8F3C-A810A211004D}
static const GUID guid_cfg_bits12 = { 0x30853fac, 0xb9fe, 0x44e6, { 0x8f, 0x3c, 0xa8, 0x10, 0xa2, 0x11, 0x0, 0x4d } };
cfg_uint cfg_bits12(guid_cfg_bits12, 0);

// {B6FD9D85-A159-4994-925A-9B3CD8881CAB}
static const GUID guid_cfg_bits16 = { 0xb6fd9d85, 0xa159, 0x4994, { 0x92, 0x5a, 0x9b, 0x3c, 0xd8, 0x88, 0x1c, 0xab } };
cfg_uint cfg_bits16(guid_cfg_bits16, 0);

// {801DD8BF-B56E-4148-836B-C3FF7ECB1913}
static const GUID guid_cfg_bits24 = { 0x801dd8bf, 0xb56e, 0x4148, { 0x83, 0x6b, 0xc3, 0xff, 0x7e, 0xcb, 0x19, 0x13 } };
cfg_uint cfg_bits24(guid_cfg_bits24, 0);

// {6269CDD5-4380-4093-B5A3-88E2A2AA465C}
static const GUID guid_cfg_bits32 = { 0x6269cdd5, 0x4380, 0x4093, { 0xb5, 0xa3, 0x88, 0xe2, 0xa2, 0xaa, 0x46, 0x5c } };
cfg_uint cfg_bits32(guid_cfg_bits32, 0);

// {DB0FE2A6-4974-453C-9F65-5AA5E6542A90}
static const GUID guid_cfg_bitsother = { 0xdb0fe2a6, 0x4974, 0x453c, { 0x9f, 0x65, 0x5a, 0xa5, 0xe6, 0x54, 0x2a, 0x90 } };
cfg_uint cfg_bitsother(guid_cfg_bitsother, 0);

// {A416A11D-1B0C-46BD-A876-EDDBCFD4AE79}
static const GUID guid_cfg_rawtime = { 0xa416a11d, 0x1b0c, 0x46bd, { 0xa8, 0x76, 0xed, 0xdb, 0xcf, 0xd4, 0xae, 0x79 } };
cfg_uint cfg_rawtime(guid_cfg_rawtime, 0);


// {32BA6435-F7EF-4C35-B108-8B892232EA44}
static const GUID guid_cfg_cdda = { 0x32ba6435, 0xf7ef, 0x4c35, { 0xb1, 0x8, 0x8b, 0x89, 0x22, 0x32, 0xea, 0x44 } };
cfg_uint cfg_cdda(guid_cfg_cdda, 0);

// {D5FBFAF2-1E11-4F28-BFA2-5CF453259488}
static const GUID guid_cfg_shorten = { 0xd5fbfaf2, 0x1e11, 0x4f28, { 0xbf, 0xa2, 0x5c, 0xf4, 0x53, 0x25, 0x94, 0x88 } };
cfg_uint cfg_shorten(guid_cfg_shorten, 0);

// {4828B161-E3BB-461E-BEA8-FA336E33FCC5}
static const GUID guid_cfg_mp3 = { 0x4828b161, 0xe3bb, 0x461e, { 0xbe, 0xa8, 0xfa, 0x33, 0x6e, 0x33, 0xfc, 0xc5 } };
cfg_uint cfg_mp3(guid_cfg_mp3, 0);

// {586B59E1-F61D-4003-A785-5448E58F49F1}
static const GUID guid_cfg_mp2 = { 0x586b59e1, 0xf61d, 0x4003, { 0xa7, 0x85, 0x54, 0x48, 0xe5, 0x8f, 0x49, 0xf1 } };
cfg_uint cfg_mp2(guid_cfg_mp2, 0);

// {99868FF5-1BAD-49C6-B633-51D81CF7BE6C}
static const GUID guid_cfg_flac = { 0x99868ff5, 0x1bad, 0x49c6, { 0xb6, 0x33, 0x51, 0xd8, 0x1c, 0xf7, 0xbe, 0x6c } };
cfg_uint cfg_flac(guid_cfg_flac, 0);

// {C0B33B46-04B4-4910-9CFF-7CAE996CB16B}
static const GUID guid_cfg_pcm = { 0xc0b33b46, 0x4b4, 0x4910, { 0x9c, 0xff, 0x7c, 0xae, 0x99, 0x6c, 0xb1, 0x6b } };
cfg_uint cfg_pcm(guid_cfg_pcm, 0);

// {1E012A06-E1F8-4097-A65E-0B367D480190}
static const GUID guid_cfg_monkeys = { 0x1e012a06, 0xe1f8, 0x4097, { 0xa6, 0x5e, 0xb, 0x36, 0x7d, 0x48, 0x1, 0x90 } };
cfg_uint cfg_monkeys(guid_cfg_monkeys, 0);

// {9C6D0C8E-73F4-41AF-96D2-E20983AB8728}
static const GUID guid_cfg_tak = { 0x9c6d0c8e, 0x73f4, 0x41af, { 0x96, 0xd2, 0xe2, 0x9, 0x83, 0xab, 0x87, 0x28 } };
cfg_uint cfg_tak(guid_cfg_tak, 0);

// {7F008A0A-FBE5-456C-871E-1109CC17D81C}
static const GUID guid_cfg_alac = { 0x7f008a0a, 0xfbe5, 0x456c, { 0x87, 0x1e, 0x11, 0x9, 0xcc, 0x17, 0xd8, 0x1c } };
cfg_uint cfg_alac(guid_cfg_alac, 0);

// {3D486848-ABB6-47CE-A1DB-9EFB2A5D2C00}
static const GUID guid_cfg_musepack = { 0x3d486848, 0xabb6, 0x47ce, { 0xa1, 0xdb, 0x9e, 0xfb, 0x2a, 0x5d, 0x2c, 0x0 } };
cfg_uint cfg_musepack(guid_cfg_musepack, 0);

// {16E57D5F-ABAE-4935-99E5-3850AA7C98E8}
static const GUID guid_cfg_optimfrog = { 0x16e57d5f, 0xabae, 0x4935, { 0x99, 0xe5, 0x38, 0x50, 0xaa, 0x7c, 0x98, 0xe8 } };
cfg_uint cfg_optimfrog(guid_cfg_optimfrog, 0);

// {8E56D2D9-E38D-46DE-AE99-D88F0E69D15F}
static const GUID guid_cfg_dualstream = { 0x8e56d2d9, 0xe38d, 0x46de, { 0xae, 0x99, 0xd8, 0x8f, 0xe, 0x69, 0xd1, 0x5f } };
cfg_uint cfg_dualstream(guid_cfg_dualstream, 0);

// {5415587F-1BE6-4D91-9826-E3D686E3392E}
static const GUID guid_cfg_vorbis = { 0x5415587f, 0x1be6, 0x4d91, { 0x98, 0x26, 0xe3, 0xd6, 0x86, 0xe3, 0x39, 0x2e } };
cfg_uint cfg_vorbis(guid_cfg_vorbis, 0);

// {9FBCBEE7-B49D-4B5F-AE29-2A8F201271E4}
static const GUID guid_cfg_speex = { 0x9fbcbee7, 0xb49d, 0x4b5f, { 0xae, 0x29, 0x2a, 0x8f, 0x20, 0x12, 0x71, 0xe4 } };
cfg_uint cfg_speex(guid_cfg_speex, 0);

// {CC1E0BE6-CDA7-4F24-A021-003FD7BE1FD8}
static const GUID guid_cfg_trueaudio = { 0xcc1e0be6, 0xcda7, 0x4f24, { 0xa0, 0x21, 0x0, 0x3f, 0xd7, 0xbe, 0x1f, 0xd8 } };
cfg_uint cfg_trueaudio(guid_cfg_trueaudio, 0);

// {F4A0F180-22D9-48C5-B111-F87B0F98234C}
static const GUID guid_cfg_wavpack = { 0xf4a0f180, 0x22d9, 0x48c5, { 0xb1, 0x11, 0xf8, 0x7b, 0xf, 0x98, 0x23, 0x4c } };
cfg_uint cfg_wavpack(guid_cfg_wavpack, 0);

// {50B5F628-17B4-44F1-A51C-95821547C015}
static const GUID guid_cfg_wma = { 0x50b5f628, 0x17b4, 0x44f1, { 0xa5, 0x1c, 0x95, 0x82, 0x15, 0x47, 0xc0, 0x15 } };
cfg_uint cfg_wma(guid_cfg_wma, 0);

// {542AD079-7D64-42AF-8D77-24195E3020F3}
static const GUID guid_cfg_aac = { 0x542ad079, 0x7d64, 0x42af, { 0x8d, 0x77, 0x24, 0x19, 0x5e, 0x30, 0x20, 0xf3 } };
cfg_uint cfg_aac(guid_cfg_aac, 0);

// {BA31E1A0-5737-4473-8738-83D97AFA863C}
static const GUID guid_cfg_othercodec = { 0xba31e1a0, 0x5737, 0x4473, { 0x87, 0x38, 0x83, 0xd9, 0x7a, 0xfa, 0x86, 0x3c } };
cfg_uint cfg_othercodec(guid_cfg_othercodec, 0);


// {EA1011A1-74B1-42E4-814F-801BA7E9D9C6}
static const GUID guid_cfg_codecsyear = { 0xea1011a1, 0x74b1, 0x42e4, { 0x81, 0x4f, 0x80, 0x1b, 0xa7, 0xe9, 0xd9, 0xc6 } };
cfg_uint cfg_codecsyear(guid_cfg_codecsyear, 0);

// {E1B1FD05-A801-4B54-B27D-9E65592A20A6}
static const GUID guid_cfg_codecsmonth = { 0xe1b1fd05, 0xa801, 0x4b54, { 0xb2, 0x7d, 0x9e, 0x65, 0x59, 0x2a, 0x20, 0xa6 } };
cfg_uint cfg_codecsmonth(guid_cfg_codecsmonth, 0);

// {9BC68CF4-6991-40E2-B79B-DC50AB2CB693}
static const GUID guid_cfg_codecsday = { 0x9bc68cf4, 0x6991, 0x40e2, { 0xb7, 0x9b, 0xdc, 0x50, 0xab, 0x2c, 0xb6, 0x93 } };
cfg_uint cfg_codecsday(guid_cfg_codecsday, 0);

// {47220D47-1354-483E-9A2C-201CAAF1D9AC}
static const GUID guid_cfg_codecshour = { 0x47220d47, 0x1354, 0x483e, { 0x9a, 0x2c, 0x20, 0x1c, 0xaa, 0xf1, 0xd9, 0xac } };
cfg_uint cfg_codecshour(guid_cfg_codecshour, 0);

// {FAB1C836-342A-427E-864F-CC25C12CD529}
static const GUID guid_cfg_codecsminute = { 0xfab1c836, 0x342a, 0x427e, { 0x86, 0x4f, 0xcc, 0x25, 0xc1, 0x2c, 0xd5, 0x29 } };
cfg_uint cfg_codecsminute(guid_cfg_codecsminute, 0);

// {5DEE3EB8-3906-407B-B772-4CA5B0CAF943}
static const GUID guid_cfg_codecssecond = { 0x5dee3eb8, 0x3906, 0x407b, { 0xb7, 0x72, 0x4c, 0xa5, 0xb0, 0xca, 0xf9, 0x43 } };
cfg_uint cfg_codecssecond(guid_cfg_codecssecond, 0);

// {D6928D38-0BBC-4754-B0F4-DBC0F3A8203C}
static const GUID guid_cfg_averagesyear = { 0xd6928d38, 0xbbc, 0x4754, { 0xb0, 0xf4, 0xdb, 0xc0, 0xf3, 0xa8, 0x20, 0x3c } };
cfg_uint cfg_averagesyear(guid_cfg_averagesyear, 0);

// {5A68F968-9DD8-4079-BC38-B6F1FD2BF05D}
static const GUID guid_cfg_averagesmonth = { 0x5a68f968, 0x9dd8, 0x4079, { 0xbc, 0x38, 0xb6, 0xf1, 0xfd, 0x2b, 0xf0, 0x5d } };
cfg_uint cfg_averagesmonth(guid_cfg_averagesmonth, 0);

// {7CEC73D2-C270-4336-AAF7-4C70EAF5B4A1}
static const GUID guid_cfg_averagesday = { 0x7cec73d2, 0xc270, 0x4336, { 0xaa, 0xf7, 0x4c, 0x70, 0xea, 0xf5, 0xb4, 0xa1 } };
cfg_uint cfg_averagesday(guid_cfg_averagesday, 0);

// {EABE2B14-84A4-4EC8-B7C3-797BFBA54ECD}
static const GUID guid_cfg_averageshour = { 0xeabe2b14, 0x84a4, 0x4ec8, { 0xb7, 0xc3, 0x79, 0x7b, 0xfb, 0xa5, 0x4e, 0xcd } };
cfg_uint cfg_averageshour(guid_cfg_averageshour, 0);

// {0EEED0A0-F6DA-48BC-B4F4-493376BAA797}
static const GUID guid_cfg_averagesminute = { 0xeeed0a0, 0xf6da, 0x48bc, { 0xb4, 0xf4, 0x49, 0x33, 0x76, 0xba, 0xa7, 0x97 } };
cfg_uint cfg_averagesminute(guid_cfg_averagesminute, 0);

// {EF92ECA2-A374-48E1-8C8B-C36E04657094}
static const GUID guid_cfg_averagessecond = { 0xef92eca2, 0xa374, 0x48e1, { 0x8c, 0x8b, 0xc3, 0x6e, 0x4, 0x65, 0x70, 0x94 } };
cfg_uint cfg_averagessecond(guid_cfg_averagessecond, 0);

// {E059F6F4-6C64-420E-BDA3-BF9AD035623D}
static const GUID guid_cfg_eventsyear = { 0xe059f6f4, 0x6c64, 0x420e, { 0xbd, 0xa3, 0xbf, 0x9a, 0xd0, 0x35, 0x62, 0x3d } };
cfg_uint cfg_eventsyear(guid_cfg_eventsyear, 0);

// {5EBBF69B-60E9-4B79-A01A-1CFEFBE27671}
static const GUID guid_cfg_eventsmonth = { 0x5ebbf69b, 0x60e9, 0x4b79, { 0xa0, 0x1a, 0x1c, 0xfe, 0xfb, 0xe2, 0x76, 0x71 } };
cfg_uint cfg_eventsmonth(guid_cfg_eventsmonth, 0);

// {CD6ECDB1-2683-4709-8416-1F4B7EECA39B}
static const GUID guid_cfg_eventsday = { 0xcd6ecdb1, 0x2683, 0x4709, { 0x84, 0x16, 0x1f, 0x4b, 0x7e, 0xec, 0xa3, 0x9b } };
cfg_uint cfg_eventsday(guid_cfg_eventsday, 0);

// {1D5074FE-9A83-4B64-931F-E8D8386D4E10}
static const GUID guid_cfg_eventshour = { 0x1d5074fe, 0x9a83, 0x4b64, { 0x93, 0x1f, 0xe8, 0xd8, 0x38, 0x6d, 0x4e, 0x10 } };
cfg_uint cfg_eventshour(guid_cfg_eventshour, 0);

// {5918EE3A-440E-4ABC-B773-06110B45D4E1}
static const GUID guid_cfg_eventsminute = { 0x5918ee3a, 0x440e, 0x4abc, { 0xb7, 0x73, 0x6, 0x11, 0xb, 0x45, 0xd4, 0xe1 } };
cfg_uint cfg_eventsminute(guid_cfg_eventsminute, 0);

// {5D47B689-F167-44C9-9E74-B8EA4A5FA267}
static const GUID guid_cfg_eventssecond = { 0x5d47b689, 0xf167, 0x44c9, { 0x9e, 0x74, 0xb8, 0xea, 0x4a, 0x5f, 0xa2, 0x67 } };
cfg_uint cfg_eventssecond(guid_cfg_eventssecond, 0);

// {AAD0EA4A-FCBF-4A10-9B96-FE9BB93D9102}
static const GUID guid_cfg_timesyear = { 0xaad0ea4a, 0xfcbf, 0x4a10, { 0x9b, 0x96, 0xfe, 0x9b, 0xb9, 0x3d, 0x91, 0x2 } };
cfg_uint cfg_timesyear(guid_cfg_timesyear, 0);

// {422474B1-22D9-496F-8200-36DA05796B0C}
static const GUID guid_cfg_timesmonth = { 0x422474b1, 0x22d9, 0x496f, { 0x82, 0x0, 0x36, 0xda, 0x5, 0x79, 0x6b, 0xc } };
cfg_uint cfg_timesmonth(guid_cfg_timesmonth, 0);

// {4F27C608-A6A4-4006-91A3-A428F5FAB8A9}
static const GUID guid_cfg_timesday = { 0x4f27c608, 0xa6a4, 0x4006, { 0x91, 0xa3, 0xa4, 0x28, 0xf5, 0xfa, 0xb8, 0xa9 } };
cfg_uint cfg_timesday(guid_cfg_timesday, 0);

// {73A71645-675B-4BD1-BA25-1536BC4A2143}
static const GUID guid_cfg_timeshour = { 0x73a71645, 0x675b, 0x4bd1, { 0xba, 0x25, 0x15, 0x36, 0xbc, 0x4a, 0x21, 0x43 } };
cfg_uint cfg_timeshour(guid_cfg_timeshour, 0);

// {DEF6DCAA-8AD1-4FD8-A2BE-EB222E345971}
static const GUID guid_cfg_timesminute = { 0xdef6dcaa, 0x8ad1, 0x4fd8, { 0xa2, 0xbe, 0xeb, 0x22, 0x2e, 0x34, 0x59, 0x71 } };
cfg_uint cfg_timesminute(guid_cfg_timesminute, 0);

// {B9A50D4D-3AE8-46E9-952A-4DBAAD0AE474}
static const GUID guid_cfg_timessecond = { 0xb9a50d4d, 0x3ae8, 0x46e9, { 0x95, 0x2a, 0x4d, 0xba, 0xad, 0xa, 0xe4, 0x74 } };
cfg_uint cfg_timessecond(guid_cfg_timessecond, 0);

// {DA2783C8-D271-4D41-A99B-58A450E04928}
static const GUID guid_cfg_version_history = { 0xda2783c8, 0xd271, 0x4d41, { 0xa9, 0x9b, 0x58, 0xa4, 0x50, 0xe0, 0x49, 0x28 } };
cfg_string cfg_version_history(guid_cfg_version_history, "");

// {AADAEB26-644F-405C-BA39-F299153510AF}
static const GUID guid_cfg_old_version = { 0xaadaeb26, 0x644f, 0x405c, { 0xba, 0x39, 0xf2, 0x99, 0x15, 0x35, 0x10, 0xaf } };
cfg_string cfg_old_version(guid_cfg_old_version, "");

// {0F7C0ECB-CA35-46ED-B341-6A1EF5ED8322}
static const GUID guid_cfg_version_count = { 0xf7c0ecb, 0xca35, 0x46ed, { 0xb3, 0x41, 0x6a, 0x1e, 0xf5, 0xed, 0x83, 0x22 } };
cfg_uint cfg_version_count(guid_cfg_version_count, 0);


// {578F99B8-058A-44BF-B6F2-BD6A0DAD6A84}
static const GUID guid_cfg_library_items_added_count = { 0x578f99b8, 0x58a, 0x44bf, { 0xb6, 0xf2, 0xbd, 0x6a, 0xd, 0xad, 0x6a, 0x84 } };
cfg_uint cfg_library_items_added_count(guid_cfg_library_items_added_count, 0);

// {F3A01249-0BA4-4585-AC38-9172A29ADF43}
static const GUID guid_cfg_library_items_added = { 0xf3a01249, 0xba4, 0x4585, { 0xac, 0x38, 0x91, 0x72, 0xa2, 0x9a, 0xdf, 0x43 } };
cfg_uint cfg_library_items_added(guid_cfg_library_items_added, 0);

// {667741B0-DCF7-49C3-BC15-C8816CED238F}
static const GUID guid_cfg_library_items_count = { 0x667741b0, 0xdcf7, 0x49c3, { 0xbc, 0x15, 0xc8, 0x81, 0x6c, 0xed, 0x23, 0x8f } };
cfg_uint cfg_library_items_removed_count(guid_cfg_library_items_count, 0);

// {54C17563-3F2F-4FFC-8709-6933E4D36499}
static const GUID guid_cfg_library_items_removed = { 0x54c17563, 0x3f2f, 0x4ffc, { 0x87, 0x9, 0x69, 0x33, 0xe4, 0xd3, 0x64, 0x99 } };
cfg_uint cfg_library_items_removed(guid_cfg_library_items_removed, 0);

// {63BB9D71-F094-4B0D-854D-339FA8DE31FF}
static const GUID guid_cfg_library_items_modified_count = { 0x63bb9d71, 0xf094, 0x4b0d, { 0x85, 0x4d, 0x33, 0x9f, 0xa8, 0xde, 0x31, 0xff } };
cfg_uint cfg_library_items_modified_count(guid_cfg_library_items_modified_count, 0);

// {5D582C44-2799-4F7F-9380-791084D18D96}
static const GUID guid_cfg_library_items_modified = { 0x5d582c44, 0x2799, 0x4f7f, { 0x93, 0x80, 0x79, 0x10, 0x84, 0xd1, 0x8d, 0x96 } };
cfg_uint cfg_library_items_modified(guid_cfg_library_items_modified, 0);

//bool main menu
// {2FBF9E5C-BA45-4686-B9FE-60D58FC94124}
static const GUID guid_cfg_main_monitor_events_enabled = { 0x2fbf9e5c, 0xba45, 0x4686, { 0xb9, 0xfe, 0x60, 0xd5, 0x8f, 0xc9, 0x41, 0x24 } };
cfg_bool cfg_main_monitor_events_enabled(guid_cfg_main_monitor_events_enabled, false);

VOID CALLBACK Startup(
	HWND hwnd,        // handle to window for timer messages
	UINT message,     // WM_TIMER message
	UINT idEvent3,     // timer identifier
	DWORD dwTime)     // current system time
{
	startup_time++;
	cfg_startup_time = cfg_startup_time + 1;
}

class start : public initquit
{

public:

	virtual void on_init()
	{
		ptr20 = SetTimer(NULL, ID_TIMER2, 1000, (TIMERPROC)Startup);
		cfg_init = cfg_init + 1;
		cfg_init2 = cfg_init2 + 1;
		if (!cfg_playback_new_track_average == 0)
		{
			total_average_trackplaybacktime = double(cfg_total_playback_time_average) / double(cfg_playback_new_track_average);
			total_average_rating = double(cfg_sum_rating) / double(cfg_playback_new_track_average);
			total_average_playcount = double(cfg_sum_playcount) / double(cfg_playback_new_track_average);
			total_average_bitrate = double(cfg_sum_bitrate) / double(cfg_playback_new_track_average);
			total_average_filesize = cfg_sum_filesize / cfg_playback_new_track_average;
			total_average_tracklength = double(cfg_sum_tracklength) / double(cfg_playback_new_track_average);
			total_average_date = double(cfg_sum_date) / double(cfg_playback_new_track_average);
			total_average_compression = cfg_sum_compression / cfg_playback_new_track_average;
			total_playbacktime_percent = double(total_average_trackplaybacktime) * 100 / double(total_average_tracklength);
		}
		GetSystemTime(&systime);
		if (cfg_timesyear == 0)
		{
			cfg_timesyear = systime.wYear;
			cfg_timesmonth = systime.wMonth;
			cfg_timesday = systime.wDay;
			cfg_timeshour = systime.wHour;
			cfg_timesminute = systime.wMinute;
			cfg_timessecond = systime.wSecond;
		}
		if (cfg_eventsyear == 0)
		{
			cfg_eventsyear = systime.wYear;
			cfg_eventsmonth = systime.wMonth;
			cfg_eventsday = systime.wDay;
			cfg_eventshour = systime.wHour;
			cfg_eventsminute = systime.wMinute;
			cfg_eventssecond = systime.wSecond;
			cfg_averagesyear = systime.wYear;
		}
		if (cfg_averagesyear == 0)
		{
			cfg_averagesmonth = systime.wMonth;
			cfg_averagesday = systime.wDay;
			cfg_averageshour = systime.wHour;
			cfg_averagesminute = systime.wMinute;
			cfg_averagessecond = systime.wSecond;
			cfg_codecsyear = systime.wYear;
		}
		if (cfg_codecsyear == 0)
		{
			cfg_codecsmonth = systime.wMonth;
			cfg_codecsday = systime.wDay;
			cfg_codecshour = systime.wHour;
			cfg_codecsminute = systime.wMinute;
			cfg_codecssecond = systime.wSecond;
		}
		a_version = static_api_ptr_t<core_version_info_v2>()->get_version_as_text();
	}
	virtual void on_quit()
	{
		KillTimer(NULL, ptr20);
	}
};

initquit_factory_t<start> g_start;

class mainmenu_commands_statistics : public mainmenu_commands
{

public:

	// Return the number of commands we provide.
	virtual t_uint32 get_command_count()
	{
		return 2;
	}

	// All commands are identified by a GUID.
	virtual GUID get_command(t_uint32 p_index)
	{
		// {1B71B595-0FC8-4F65-9D0D-D4E52ED3843A}
		static const GUID guid_main_statistics = { 0x1b71b595, 0xfc8, 0x4f65, { 0x9d, 0xd, 0xd4, 0xe5, 0x2e, 0xd3, 0x84, 0x3a } };
		// {3E590C54-3C6C-4D51-BAA6-7F6E73B81AD6}
		static const GUID guid_main_statistics_2 = { 0x3e590c54, 0x3c6c, 0x4d51, { 0xba, 0xa6, 0x7f, 0x6e, 0x73, 0xb8, 0x1a, 0xd6 } };

		if (p_index == 0)
			return guid_main_statistics;
		if (p_index == 1)
			return guid_main_statistics_2;
		return pfc::guid_null;
	}

	// Set p_out to the name of the n-th command.
	// This name is used to identify the command and determines
	// the default position of the command in the menu.
	virtual void get_name(t_uint32 p_index, pfc::string_base& p_out)
	{
		if (p_index == 0)
			p_out = "Statistics to console total";
		if (p_index == 1)
			p_out = "Statistics to console session";
	}

	// Set p_out to the description for the n-th command.
	virtual bool get_description(t_uint32 p_index, pfc::string_base& p_out)
	{
		if (p_index == 0)
			p_out = "Print statistics to console total";
		if (p_index == 1)
			p_out = "Print statistics to console session";
		else
			return false;
		return true;
	}

	// Every set of commands needs to declare which group it belongs to.
	virtual GUID get_parent()
	{
		return mainmenu_groups::help;
	}

	// Execute n-th command.
	// p_callback is reserved for future use.
	virtual void execute(t_uint32 p_index, service_ptr_t<service_base> p_callback)
	{
		if (p_index == 0 && core_api::assert_main_thread())
		{
			console::info("======== Statistics to console total ========");
			console::info("======== total times ========");
			FB2K_console_formatter() << "total time: " << cfg_startup_time / 24 / 60 / 60 << "d " << cfg_startup_time / 60 / 60 % 24 << "h " << cfg_startup_time / 60 % 60 << "m " << cfg_startup_time % 60 << "s";
			FB2K_console_formatter() << "total playback time: " << cfg_total_playback_time / 24 / 60 / 60 << "d " << cfg_total_playback_time / 60 / 60 % 24 << "h " << cfg_total_playback_time / 60 % 60 << "m " << cfg_total_playback_time % 60 << "s (" << double(cfg_total_playback_time) / double(cfg_startup_time) * 100 << "% of total time)";
			cfg_idle_time = cfg_startup_time - cfg_total_playback_time;
			FB2K_console_formatter() << "total idle time: " << cfg_idle_time / 24 / 60 / 60 << "d " << cfg_idle_time / 60 / 60 % 24 << "h " << cfg_idle_time / 60 % 60 << "m " << cfg_idle_time % 60 << "s";
			FB2K_console_formatter() << "on_init: " << cfg_init;
			FB2K_console_formatter() << "average session time: " << (cfg_startup_time / cfg_init) / 24 / 60 / 60 << "d " << (cfg_startup_time / cfg_init) / 60 / 60 % 24 << "h " << (cfg_startup_time / cfg_init) / 60 % 60 << "m " << (cfg_startup_time / cfg_init) % 60 << "s";
			FB2K_console_formatter() << "average session playback time: " << (cfg_total_playback_time / cfg_init) / 24 / 60 / 60 << "d " << (cfg_total_playback_time / cfg_init) / 60 / 60 % 24 << "h " << (cfg_total_playback_time / cfg_init) / 60 % 60 << "m " << (cfg_total_playback_time / cfg_init) % 60 << "s";
			console::info("======== system ========");
			//if (cfg_version_history != "")
			//{
				//FB2K_console_formatter() << "version history: foobar2000 " << cfg_version_history;
			FB2K_console_formatter() << "installed versions: " << cfg_version_count;
			//}
			if (core_api::is_portable_mode_enabled())
			{
				FB2K_console_formatter() << "portable mode = true";
			}
			else
			{
				FB2K_console_formatter() << "portable mode = false";
			}
			FB2K_console_formatter() << "profile path: " << core_api::get_profile_path();
			OSVERSIONINFOEX osvi;
			ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
			osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
			GetVersionEx((OSVERSIONINFO*)&osvi);
			int build_number = osvi.dwBuildNumber;
			int major_version = osvi.dwMajorVersion;
			int minor_version = osvi.dwMinorVersion;
			int platform_id = osvi.dwPlatformId;
			int service_pack_major = osvi.wServicePackMajor;
			int service_pack_minor = osvi.wServicePackMinor;
			int product_type = osvi.wProductType;
			FB2K_console_formatter() << platform_id << "." << major_version << "." << minor_version << "." << build_number << " (SP" << service_pack_major << "." << service_pack_minor << ")";
			console::info("-----------------");
			console::info("======== total events ========");
			console::info("--------- playback events ---------");
			FB2K_console_formatter() << "on_init: " << cfg_init2;
			if (cfg_init == 0)
			{
				cfg_init = 1;
			}
			FB2K_console_formatter() << "on_playback_new_track: " << cfg_playback_new_track;
			switch (stop_reason)
			{
			case 0:
				playback_stop_reason = "0 user";
				break;
			case 1:
				playback_stop_reason = "1 end of file";
				break;
			case 2:
				playback_stop_reason = "2 starting another";
				break;
			case 3:
				playback_stop_reason = "3 shuting down";
				break;

			default:
				playback_stop_reason = "undetermined";
			}
			FB2K_console_formatter() << "on_playback_stop: " << cfg_playback_stop;
			FB2K_console_formatter() << "----- last reason: " << playback_stop_reason;
			FB2K_console_formatter() << "----------0 user: " << cfg_p_reason0;
			FB2K_console_formatter() << "----------1 end of file: " << cfg_p_reason1;
			FB2K_console_formatter() << "----------2 starting another: " << cfg_p_reason2;
			FB2K_console_formatter() << "----------3 shuting down: " << cfg_p_reason3;
			FB2K_console_formatter() << "on_playback_seek: " << cfg_playback_seek;
			FB2K_console_formatter() << "----- last seek time: " << seek_time;
			FB2K_console_formatter() << "on_playback_pause: " << cfg_playback_pause;
			switch (playback_command)
			{
			case 0:
				starting_command = "0 default";
				break;
			case 1:
				starting_command = "1 play";
				break;
			case 2:
				starting_command = "2 next";
				break;
			case 3:
				starting_command = "3 previous";
				break;
			case 4:
				starting_command = "4 settrack";
				break;
			case 5:
				starting_command = "5 random";
				break;
			case 6:
				starting_command = "6 resume";
				break;

			default:
				starting_command = "undetermined";
			}
			FB2K_console_formatter() << "on_playback_starting: " << cfg_playback_starting;
			FB2K_console_formatter() << "----- last command: " << starting_command;
			//FB2K_console_formatter() << "-----------0 default: " << cfg_playback_command0;
			FB2K_console_formatter() << "-----------1 play: " << cfg_playback_command1;
			FB2K_console_formatter() << "-----------2 next: " << cfg_playback_command2;
			FB2K_console_formatter() << "-----------3 previous: " << cfg_playback_command3;
			FB2K_console_formatter() << "-----------4 settrack: " << cfg_playback_command4;
			FB2K_console_formatter() << "-----------5 random: " << cfg_playback_command5;
			FB2K_console_formatter() << "-----------6 resume: " << cfg_playback_command6;
			FB2K_console_formatter() << "on_playback_edited: " << cfg_playback_edited;
			FB2K_console_formatter() << "on_playback_dynamic_info: " << cfg_playback_dynamic_info;
			FB2K_console_formatter() << "on_playback_dynamic_info_track: " << cfg_playback_dynamic_info_track;
			FB2K_console_formatter() << "on_playback_time: " << playback_time;
			FB2K_console_formatter() << "on_volume_change: " << cfg_volume_change;
			FB2K_console_formatter() << "----- volume: " << volume_new_value;
			console::info("--------- playlist events ---------");
			FB2K_console_formatter() << "on_items_selection_change: " << cfg_items_selection_change;
			FB2K_console_formatter() << "on_playlist_activate: " << cfg_playlist_activate;
			FB2K_console_formatter() << "on_playlist_created: " << cfg_playlist_created;
			FB2K_console_formatter() << "on_playlist_renamed: " << cfg_playlist_renamed;
			FB2K_console_formatter() << "on_playlists_removed: " << cfg_playlists_removed;
			FB2K_console_formatter() << "on_playlists_reorder: " << cfg_playlists_reorder;
			console::info("-------- library events ---------");
			FB2K_console_formatter() << "on_items_added: " << cfg_library_items_added;
			FB2K_console_formatter() << "(items added: " << cfg_library_items_added_count << ")";
			FB2K_console_formatter() << "on_items_removed: " << cfg_library_items_removed;
			FB2K_console_formatter() << "(items removed: " << cfg_library_items_removed_count << ")";
			FB2K_console_formatter() << "on_items_modified: " << cfg_library_items_modified;
			FB2K_console_formatter() << "(items modified: " << cfg_library_items_modified_count << ")";
			console::info("--------- other events ---------");
			FB2K_console_formatter() << "on_item_played: " << cfg_item_played;
			FB2K_console_formatter() << "on_playback_order_changed: " << cfg_playback_order_changed;
			cfg_sum = cfg_playback_new_track + cfg_playback_stop + cfg_playback_seek + cfg_playback_pause + cfg_playback_starting + cfg_playback_edited + cfg_playback_dynamic_info + cfg_playback_dynamic_info_track + cfg_volume_change + cfg_init + cfg_items_selection_change + cfg_playlist_activate + cfg_playback_order_changed + cfg_playlist_created + cfg_playlist_renamed + cfg_playlists_removed + cfg_playlists_reorder + cfg_item_played + cfg_library_items_removed + cfg_library_items_added + cfg_library_items_modified;
			FB2K_console_formatter() << "--------- [total events sum: " << cfg_sum << "] ---------";
			console::info("======== total averages ========");
			FB2K_console_formatter() << "tracks started: " << cfg_playback_new_track_average;
			console::info("-----------------");
			FB2K_console_formatter() << "track playback time: " << t_uint64(total_average_trackplaybacktime) / 60 << "m " << t_uint64(total_average_trackplaybacktime) % 60 << "s (" << total_playbacktime_percent << " % of tracklength)";
			FB2K_console_formatter() << "tracklength: " << t_uint64(total_average_tracklength) / 60 << "m " << t_uint64(total_average_tracklength) % 60 << "s";
			FB2K_console_formatter() << "rating: " << total_average_rating;
			FB2K_console_formatter() << "playcount: " << total_average_playcount;
			FB2K_console_formatter() << "bitrate: " << total_average_bitrate << " kbps";
			FB2K_console_formatter() << "filesize: " << total_average_filesize << " MB";

			FB2K_console_formatter() << "date: " << t_uint64(total_average_date);
			FB2K_console_formatter() << "compression: " << total_average_compression << " %";
			console::info("-----------------");
			console::info("======== total codecs ========");
			if (cfg_cdda > 0)
			{
				FB2K_console_formatter() << "CDDA: " << cfg_cdda;
			}
			if (cfg_flac > 0)
			{
				FB2K_console_formatter() << "FLAC: " << cfg_flac;
			}
			if (cfg_mp3 > 0)
			{
				FB2K_console_formatter() << "MP3: " << cfg_mp3;
			}
			if (cfg_mp2 > 0)
			{
				FB2K_console_formatter() << "MP2: " << cfg_mp2;
			}
			if (cfg_pcm > 0)
			{
				FB2K_console_formatter() << "PCM: " << cfg_pcm;
			}
			if (cfg_monkeys > 0)
			{
				FB2K_console_formatter() << "Monkey's Audio: " << cfg_monkeys;
			}
			if (cfg_tak > 0)
			{
				FB2K_console_formatter() << "TAK: " << cfg_tak;
			}
			if (cfg_alac > 0)
			{
				FB2K_console_formatter() << "ALAC: " << cfg_alac;
			}
			if (cfg_musepack > 0)
			{
				FB2K_console_formatter() << "Musepack: " << cfg_musepack;
			}
			if (cfg_optimfrog > 0)
			{
				FB2K_console_formatter() << "OptimFROG: " << cfg_optimfrog;
			}
			if (cfg_dualstream > 0)
			{
				FB2K_console_formatter() << "DualStream: " << cfg_dualstream;
			}
			if (cfg_vorbis > 0)
			{
				FB2K_console_formatter() << "Vorbis: " << cfg_vorbis;
			}
			if (cfg_speex > 0)
			{
				FB2K_console_formatter() << "Speex: " << cfg_speex;
			}
			if (cfg_trueaudio > 0)
			{
				FB2K_console_formatter() << "True Audio: " << cfg_trueaudio;
			}
			if (cfg_wavpack > 0)
			{
				FB2K_console_formatter() << "Wavpack: " << cfg_wavpack;
			}
			if (cfg_wma > 0)
			{
				FB2K_console_formatter() << "WMA: " << cfg_wma;
			}
			if (cfg_aac > 0)
			{
				FB2K_console_formatter() << "AAC: " << cfg_aac;
			}
			if (cfg_shorten > 0)
			{
				FB2K_console_formatter() << "Shorten: " << cfg_shorten;
			}
			if (cfg_othercodec > 0)
			{
				FB2K_console_formatter() << "other: " << cfg_othercodec;
			}
			console::info("-------- encoding --------");
			FB2K_console_formatter() << "lossless: " << cfg_lossless;
			FB2K_console_formatter() << "lossy: " << cfg_lossy;
			if (cfg_lossless > 0 || cfg_lossy > 0)
			{
				console::info("-----------------");
				total_lossless_percent = double(cfg_lossless) * 100 / double(cfg_lossy + cfg_lossless);
				total_lossy_percent = double(cfg_lossy) * 100 / double(cfg_lossy + cfg_lossless);
				FB2K_console_formatter() << "lossless/lossy: " << total_lossless_percent << "% / " << total_lossy_percent << "%";
			}
			console::info("-------- channels --------");
			FB2K_console_formatter() << "stereo: " << cfg_stereo;
			FB2K_console_formatter() << "mono: " << cfg_mono;
			FB2K_console_formatter() << "other: " << cfg_other;
			if (cfg_mono > 0 || cfg_stereo > 0 || cfg_other > 0)
			{
				console::info("-----------------");
				total_stereo_percent = double(cfg_stereo) * 100 / double(cfg_mono + cfg_stereo + cfg_other);
				total_mono_percent = double(cfg_mono) * 100 / double(cfg_mono + cfg_stereo + cfg_other);
				FB2K_console_formatter() << "stereo/mono: " << total_stereo_percent << "% / " << total_mono_percent << "%";
			}
			console::info("-------- sample rate --------");
			FB2K_console_formatter() << "11025Hz: " << cfg_sample11025;
			FB2K_console_formatter() << "22050Hz: " << cfg_sample22050;
			FB2K_console_formatter() << "44100Hz: " << cfg_sample44100;
			FB2K_console_formatter() << "48000Hz: " << cfg_sample48000;
			FB2K_console_formatter() << "88200Hz: " << cfg_sample88200;
			FB2K_console_formatter() << "96000Hz: " << cfg_sample96000;
			FB2K_console_formatter() << "192000Hz: " << cfg_sample192000;
			FB2K_console_formatter() << "other: " << cfg_sampleother;
			if (cfg_sample11025 > 0 || cfg_sample22050 > 0 || cfg_sample44100 > 0 || cfg_sample48000 > 0 || cfg_sample88200 > 0 || cfg_sample96000 > 0 || cfg_sample192000 > 0 || cfg_sampleother > 0)
			{
				console::info("-----------------");
				total_sample44100_percent = double(cfg_sample44100) * 100 / double(cfg_sample11025 + cfg_sample22050 + cfg_sample44100 + cfg_sample48000 + cfg_sample88200 + cfg_sample96000 + cfg_sample192000 + cfg_sampleother);
				total_sample48000_percent = double(cfg_sample48000) * 100 / double(cfg_sample11025 + cfg_sample22050 + cfg_sample44100 + cfg_sample48000 + cfg_sample88200 + cfg_sample96000 + cfg_sample192000 + cfg_sampleother);
				FB2K_console_formatter() << "44.1kHz(CD)/48kHz(DVD): " << total_sample44100_percent << "% / " << total_sample48000_percent << "%";
			}
			console::info("-------- bits per sample --------");
			FB2K_console_formatter() << "8bits: " << cfg_bits8;
			FB2K_console_formatter() << "12bits: " << cfg_bits12;
			FB2K_console_formatter() << "16bits: " << cfg_bits16;
			FB2K_console_formatter() << "24bits: " << cfg_bits24;
			FB2K_console_formatter() << "32bits: " << cfg_bits32;
			FB2K_console_formatter() << "other: " << cfg_bitsother;
			if (cfg_bits8 > 0 || cfg_bits12 > 0 || cfg_bits16 > 0 || cfg_bits24 > 0 || cfg_bits32 > 0 || cfg_bitsother > 0)
			{
				console::info("-----------------");
				total_bits16_percent = double(cfg_bits16) * 100 / double(cfg_bits8 + cfg_bits12 + cfg_bits16 + cfg_bits24 + cfg_bits32 + cfg_bitsother);
				total_bits24_percent = double(cfg_bits24) * 100 / double(cfg_bits8 + cfg_bits12 + cfg_bits16 + cfg_bits24 + cfg_bits32 + cfg_bitsother);
				FB2K_console_formatter() << "16bits/24bits: " << total_bits16_percent << "% / " << total_bits24_percent << "%";
			}
			console::info("-----------------");
		}
		if (p_index == 1 && core_api::assert_main_thread())
		{
			console::info("======== Statistics to console session ========");
			console::info("======== session times ========");
			FB2K_console_formatter() << "session time: " << t_uint64(startup_time) / 24 / 60 / 60 << "d " << t_uint64(startup_time) / 60 / 60 % 24 << "h " << t_uint64(startup_time) / 60 % 60 << "m " << t_uint64(startup_time) % 60 << "s";
			FB2K_console_formatter() << "session playback time: " << t_uint64(total_playback_time) / 24 / 60 / 60 << "d " << t_uint64(total_playback_time) / 60 / 60 % 24 << "h " << t_uint64(total_playback_time) / 60 % 60 << "m " << t_uint64(total_playback_time) % 60 << "s (" << total_playback_time / startup_time * 100 << "% of total time)";
			idle_time = startup_time - total_playback_time;
			FB2K_console_formatter() << "session idle time: " << t_uint64(idle_time) / 24 / 60 / 60 << "d " << t_uint64(idle_time) / 60 / 60 % 24 << "h " << t_uint64(idle_time) / 60 % 60 << "m " << t_uint64(idle_time) % 60 << "s";
			console::info("-----------------");
			console::info("======== session events ========");
			console::info("-------- playback events --------");
			FB2K_console_formatter() << "on_playback_new_track: " << playback_new_track;
			switch (stop_reason)
			{
			case 0:
				playback_stop_reason = "0 user";
				break;
			case 1:
				playback_stop_reason = "1 end of file";
				break;
			case 2:
				playback_stop_reason = "2 starting another";
				break;
			case 3:
				playback_stop_reason = "3 shuting down";
				break;

			default:
				playback_stop_reason = "undetermined";
			}
			FB2K_console_formatter() << "on_playback_stop: " << playback_stop;
			FB2K_console_formatter() << "----- last reason: " << playback_stop_reason;
			FB2K_console_formatter() << "----------0 user: " << p_reason0;
			FB2K_console_formatter() << "----------1 end of file: " << p_reason1;
			FB2K_console_formatter() << "----------2 starting another: " << p_reason2;
			FB2K_console_formatter() << "----------3 shuting down: " << p_reason3;
			FB2K_console_formatter() << "on_playback_seek: " << playback_seek;
			FB2K_console_formatter() << "----- last seek time: " << seek_time;
			FB2K_console_formatter() << "on_playback_pause: " << playback_pause;
			switch (playback_command)
			{
			case 0:
				starting_command = "0 default";
				break;
			case 1:
				starting_command = "1 play";
				break;
			case 2:
				starting_command = "2 next";
				break;
			case 3:
				starting_command = "3 previous";
				break;
			case 4:
				starting_command = "4 settrack";
				break;
			case 5:
				starting_command = "5 random";
				break;
			case 6:
				starting_command = "6 resume";
				break;

			default:
				starting_command = "undetermined";
			}
			FB2K_console_formatter() << "on_playback_starting: " << playback_starting;
			FB2K_console_formatter() << "----- last command: " << starting_command;
			//FB2K_console_formatter() << "-----------0 default: " << playback_command0;
			FB2K_console_formatter() << "-----------1 play: " << playback_command1;
			FB2K_console_formatter() << "-----------2 next: " << playback_command2;
			FB2K_console_formatter() << "-----------3 previous: " << playback_command3;
			FB2K_console_formatter() << "-----------4 settrack: " << playback_command4;
			FB2K_console_formatter() << "-----------5 random: " << playback_command5;
			FB2K_console_formatter() << "-----------6 resume: " << playback_command6;
			FB2K_console_formatter() << "on_playback_edited: " << playback_edited;
			FB2K_console_formatter() << "on_playback_dynamic_info: " << playback_dynamic_info;
			FB2K_console_formatter() << "on_playback_dynamic_info_track: " << playback_dynamic_info_track;
			FB2K_console_formatter() << "on_playback_time: " << playback_time;
			FB2K_console_formatter() << "on_volume_change: " << volume_change;
			FB2K_console_formatter() << "----- volume: " << volume_new_value;
			console::info("-------- playlist events ---------");
			FB2K_console_formatter() << "on_items_selection_change: " << items_selection_change;
			FB2K_console_formatter() << "on_playlist_activate: " << playlist_activate;
			FB2K_console_formatter() << "on_playlist_created: " << playlist_created;
			FB2K_console_formatter() << "on_playlist_renamed: " << playlist_renamed;
			FB2K_console_formatter() << "on_playlists_removed: " << playlists_removed;
			FB2K_console_formatter() << "on_playlists_reorder: " << playlists_reorder;
			console::info("-------- library events ---------");
			FB2K_console_formatter() << "on_items_added: " << library_items_added;
			FB2K_console_formatter() << "(items added: " << library_items_added_count << ")";
			FB2K_console_formatter() << "on_items_removed: " << library_items_removed;
			FB2K_console_formatter() << "(items removed: " << library_items_removed_count << ")";
			FB2K_console_formatter() << "on_items_modified: " << library_items_modified;
			FB2K_console_formatter() << "(items modified: " << library_items_modified_count << ")";
			console::info("-------- other events ---------");
			FB2K_console_formatter() << "on_item_played: " << item_played;
			FB2K_console_formatter() << "on_playback_order_changed: " << playback_order_changed;
			sum = playback_new_track + playback_stop + playback_seek + playback_pause + playback_starting + playback_edited + playback_dynamic_info + playback_dynamic_info_track + volume_change + items_selection_change + playlist_activate + playback_order_changed + playlist_created + playlist_renamed + playlists_removed + playlists_reorder + item_played + library_items_removed + library_items_added + library_items_modified;
			FB2K_console_formatter() << "--------- [session events sum: " << sum << "] --------";
			console::info("======== session averages ========");
			FB2K_console_formatter() << "tracks started: " << playback_new_track;
			console::info("-----------------");
			FB2K_console_formatter() << "track playback time: " << t_uint64(average_trackplaybacktime) / 60 << "m " << t_uint64(average_trackplaybacktime) % 60 << "s (" << playbacktime_percent << " % of tracklength)";
			FB2K_console_formatter() << "tracklength: " << t_uint64(average_tracklength) / 60 << "m " << t_uint64(average_tracklength) % 60 << "s";
			FB2K_console_formatter() << "rating: " << average_rating;
			FB2K_console_formatter() << "playcount: " << average_playcount;
			FB2K_console_formatter() << "bitrate: " << average_bitrate << " kbps";
			FB2K_console_formatter() << "filesize: " << average_filesize << " MB";

			FB2K_console_formatter() << "date: " << t_uint64(average_date);
			FB2K_console_formatter() << "compression: " << average_compression << " %";
			console::info("-----------------");
			console::info("======== status ========");
			pfc::string8 playbackorder;
			switch (static_api_ptr_t<playlist_manager>()->playback_order_get_active())
			{
			case 0:
				playbackorder = "0 default";
				break;
			case 1:
				playbackorder = "1 repeat (playlist)";
				break;
			case 2:
				playbackorder = "2 repeat (track)";
				break;
			case 3:
				playbackorder = "3 random";
				break;
			case 4:
				playbackorder = "4 shuffle (tracks)";
				break;
			case 5:
				playbackorder = "5 shuffle (albums)";
				break;
			case 6:
				playbackorder = "6 shuffle (folders)";
				break;

			default:
				playbackorder = "undetermined";
			}
			if (config_object::g_get_data_bool_simple(standard_config_objects::bool_cursor_follows_playback, false))
			{
				FB2K_console_formatter() << "cursor follows playback = true";
			}
			else
			{
				FB2K_console_formatter() << "cursor follows playback = false";
			}
			if (config_object::g_get_data_bool_simple(standard_config_objects::bool_playback_follows_cursor, false))
			{
				FB2K_console_formatter() << "playback follows cursor = true";
			}
			else
			{
				FB2K_console_formatter() << "playback follows cursor = false";
			}
			if (static_api_ptr_t<playback_control>()->get_stop_after_current())
			{
				FB2K_console_formatter() << "stop after current = true";
			}
			else
			{
				FB2K_console_formatter() << "stop after current = false";
			}
			if (static_api_ptr_t<playback_control>()->is_playing())
			{
				FB2K_console_formatter() << "playing = true";
			}
			else
			{
				FB2K_console_formatter() << "playing = false";
			}
			if (static_api_ptr_t<playback_control>()->is_paused())
			{
				FB2K_console_formatter() << "paused = true";
			}
			else
			{
				FB2K_console_formatter() << "paused = false";
			}
			if (!(static_api_ptr_t<playback_control>()->is_playing() || static_api_ptr_t<playback_control>()->is_paused()))
			{
				FB2K_console_formatter() << "stopped = true";
			}
			else
			{
				FB2K_console_formatter() << "stopped = false";
			}
			if (config_object::g_get_data_bool_simple(standard_config_objects::bool_ui_always_on_top, false))
			{
				FB2K_console_formatter() << "always on top = true";
			}
			else
			{
				FB2K_console_formatter() << "always on top = false";
			}
			FB2K_console_formatter() << "playback order = " << playbackorder;
			console::info("-----------------");
			console::info("======== session codecs ========");
			if (cdda > 0)
			{
				FB2K_console_formatter() << "CDDA: " << cdda;
			}
			if (flac > 0)
			{
				FB2K_console_formatter() << "FLAC: " << flac;
			}
			if (mp3 > 0)
			{
				FB2K_console_formatter() << "MP3: " << mp3;
			}
			if (mp2 > 0)
			{
				FB2K_console_formatter() << "MP2: " << mp2;
			}
			if (pcm > 0)
			{
				FB2K_console_formatter() << "PCM: " << pcm;
			}
			if (monkeys > 0)
			{
				FB2K_console_formatter() << "Monkey's Audio: " << monkeys;
			}
			if (tak > 0)
			{
				FB2K_console_formatter() << "TAK: " << tak;
			}
			if (alac > 0)
			{
				FB2K_console_formatter() << "ALAC: " << alac;
			}
			if (musepack > 0)
			{
				FB2K_console_formatter() << "Musepack: " << musepack;
			}
			if (optimfrog > 0)
			{
				FB2K_console_formatter() << "OptimFROG: " << optimfrog;
			}
			if (dualstream > 0)
			{
				FB2K_console_formatter() << "DualStream: " << dualstream;
			}
			if (vorbis > 0)
			{
				FB2K_console_formatter() << "Vorbis: " << vorbis;
			}
			if (speex > 0)
			{
				FB2K_console_formatter() << "Speex: " << speex;
			}
			if (trueaudio > 0)
			{
				FB2K_console_formatter() << "True Audio: " << trueaudio;
			}
			if (wavpack > 0)
			{
				FB2K_console_formatter() << "Wavpack: " << wavpack;
			}
			if (wma > 0)
			{
				FB2K_console_formatter() << "WMA: " << wma;
			}
			if (aac > 0)
			{
				FB2K_console_formatter() << "AAC: " << aac;
			}
			if (shorten > 0)
			{
				FB2K_console_formatter() << "Shorten: " << shorten;
			}
			if (othercodec > 0)
			{
				FB2K_console_formatter() << "other: " << othercodec;
			}
			console::info("-------- encoding --------");
			FB2K_console_formatter() << "lossless: " << lossless;
			FB2K_console_formatter() << "lossy: " << lossy;
			if (lossless > 0 || lossy > 0)
			{
				console::info("-----------------");
				lossless_percent = double(lossless) * 100 / double(lossy + lossless);
				lossy_percent = double(lossy) * 100 / double(lossy + lossless);
				FB2K_console_formatter() << "lossless/lossy: " << lossless_percent << "% / " << lossy_percent << "%";
			}
			console::info("-------- channels --------");
			FB2K_console_formatter() << "stereo: " << stereo;
			FB2K_console_formatter() << "mono: " << mono;
			FB2K_console_formatter() << "other: " << other;
			if (mono > 0 || stereo > 0 || other > 0)
			{
				console::info("-----------------");
				stereo_percent = double(stereo) * 100 / double(mono + stereo + other);
				mono_percent = double(mono) * 100 / double(mono + stereo + other);
				FB2K_console_formatter() << "stereo/mono: " << stereo_percent << "% / " << mono_percent << "%";
			}
			console::info("-------- sample rate --------");
			FB2K_console_formatter() << "11025Hz: " << sample11025;
			FB2K_console_formatter() << "22050Hz: " << sample22050;
			FB2K_console_formatter() << "44100Hz: " << sample44100;
			FB2K_console_formatter() << "48000Hz: " << sample48000;
			FB2K_console_formatter() << "88200Hz: " << sample88200;
			FB2K_console_formatter() << "96000Hz: " << sample96000;
			FB2K_console_formatter() << "192000Hz: " << sample192000;
			FB2K_console_formatter() << "other: " << sampleother;
			if (sample11025 > 0 || sample22050 > 0 || sample44100 > 0 || sample48000 > 0 || sample88200 > 0 || sample96000 > 0 || sample192000 > 0 || sampleother > 0)
			{
				console::info("-----------------");
				sample44100_percent = double(sample44100) * 100 / double(sample11025 + sample22050 + sample44100 + sample48000 + sample88200 + sample96000 + sample192000 + sampleother);
				sample48000_percent = double(sample48000) * 100 / double(sample11025 + sample22050 + sample44100 + sample48000 + sample88200 + sample96000 + sample192000 + sampleother);
				FB2K_console_formatter() << "44.1kHz(CD)/48kHz(DVD): " << sample44100_percent << "% / " << sample48000_percent << "%";
			}
			console::info("-------- bits per sample --------");
			FB2K_console_formatter() << "8bits: " << bits8;
			FB2K_console_formatter() << "12bits: " << bits12;
			FB2K_console_formatter() << "16bits: " << bits16;
			FB2K_console_formatter() << "24bits: " << bits24;
			FB2K_console_formatter() << "32bits: " << bits32;
			FB2K_console_formatter() << "other: " << bitsother;
			if (bits8 > 0 || bits12 > 0 || bits16 > 0 || bits24 > 0 || bits32 > 0 || bitsother > 0)
			{
				console::info("-----------------");
				bits16_percent = double(bits16) * 100 / double(bits8 + bits12 + bits16 + bits24 + bits32 + bitsother);
				bits24_percent = double(bits24) * 100 / double(bits8 + bits12 + bits16 + bits24 + bits32 + bitsother);
				FB2K_console_formatter() << "16bits/24bits: " << bits16_percent << "% / " << bits24_percent << "%";
			}
			console::info("-----------------");
		}
	}
	// The standard version of this command does not support checked or disabled
	// commands, so we use our own version.
	virtual bool get_display(t_uint32 p_index, pfc::string_base& p_text, t_uint32& p_flags)
	{
		if (p_index == 0) {
			get_name(p_index, p_text);
		}
		if (p_index == 1) {
			get_name(p_index, p_text);
		}
		return true;
	}
	virtual t_uint32 get_sort_priority()
	{
		return sort_priority_dontcare;
	}
};

static mainmenu_commands_factory_t<mainmenu_commands_statistics> g_mainmenu_commands_statistics;

class play_callback_statistics : public play_callback_static
{

public:

	virtual unsigned get_flags(void)
	{
		return(flag_on_playback_new_track | flag_on_playback_stop | flag_on_playback_seek | flag_on_playback_pause | flag_on_playback_starting | flag_on_playback_edited | flag_on_playback_dynamic_info | flag_on_playback_dynamic_info_track | flag_on_playback_time | flag_on_volume_change);
	}

	virtual void on_playback_new_track(metadb_handle_ptr p_track)
	{
		playback_new_track++;
		cfg_playback_new_track = cfg_playback_new_track + 1;
		cfg_playback_new_track_average = cfg_playback_new_track_average + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playback: on_playback_new_track");
		}

		p_track->metadb_lock();

		service_ptr_t<titleformat_object> tagobj1;
		service_ptr_t<titleformat_object> tagobj2;
		service_ptr_t<titleformat_object> tagobj3;
		service_ptr_t<titleformat_object> tagobj4;
		service_ptr_t<titleformat_object> tagobj5;
		service_ptr_t<titleformat_object> tagobj6;
		service_ptr_t<titleformat_object> tagobj7;
		service_ptr_t<titleformat_object> tagobj8;
		service_ptr_t<titleformat_object> tagobj9;
		service_ptr_t<titleformat_object> tagobj10;
		service_ptr_t<titleformat_object> tagobj11;

		static_api_ptr_t<titleformat_compiler> compiler;

		tag1 = "%rating%";
		compiler->compile_safe(tagobj1, tag1);
		tag2 = "%play_count%";
		compiler->compile_safe(tagobj2, tag2);
		tag3 = "%date%";
		compiler->compile_safe(tagobj3, tag3);
		tag4 = "%bitrate%";
		compiler->compile_safe(tagobj4, tag4);
		tag5 = "%filesize%";
		compiler->compile_safe(tagobj5, tag5);
		tag6 = "%length_seconds%";
		compiler->compile_safe(tagobj6, tag6);
		tag7 = "%samplerate%";
		compiler->compile_safe(tagobj7, tag7);
		tag8 = "%__bitspersample%";
		compiler->compile_safe(tagobj8, tag8);
		tag9 = "%__channels%";
		compiler->compile_safe(tagobj9, tag9);
		tag10 = "$info(encoding)";
		compiler->compile_safe(tagobj10, tag10);
		tag11 = "$info(codec)";
		compiler->compile_safe(tagobj11, tag11);

		p_track->format_title(NULL, a_rating, tagobj1, NULL);
		p_track->format_title(NULL, a_playcount, tagobj2, NULL);
		p_track->format_title(NULL, a_date, tagobj3, NULL);
		p_track->format_title(NULL, a_bitrate, tagobj4, NULL);
		p_track->format_title(NULL, a_filesize, tagobj5, NULL);
		p_track->format_title(NULL, a_tracklength, tagobj6, NULL);
		p_track->format_title(NULL, a_samplerate, tagobj7, NULL);
		p_track->format_title(NULL, a_bitspersample, tagobj8, NULL);
		p_track->format_title(NULL, a_channels, tagobj9, NULL);
		p_track->format_title(NULL, a_encoding, tagobj10, NULL);
		p_track->format_title(NULL, a_codec, tagobj11, NULL);

		p_track->metadb_unlock();

		tagobj1.release();
		tagobj2.release();
		tagobj3.release();
		tagobj4.release();
		tagobj5.release();
		tagobj6.release();
		tagobj7.release();
		tagobj8.release();
		tagobj9.release();
		tagobj10.release();
		tagobj11.release();

		pfc::string8 a_codeccdda = "CDDA";
		pfc::string8 a_codecshorten = "Shorten";
		pfc::string8 a_codecflac = "FLAC";
		pfc::string8 a_codecmp3 = "MP3";
		pfc::string8 a_codecmp2 = "MP2";
		pfc::string8 a_codecpcm = "PCM";
		pfc::string8 a_codecmonkeys = "Monkey's Audio";
		pfc::string8 a_codectak = "TAK";
		pfc::string8 a_codecalac = "ALAC";
		pfc::string8 a_codecmusepack = "Musepack";
		pfc::string8 a_codecoptimfrog = "OptimFROG";
		pfc::string8 a_codecdualstream = "DualStream";
		pfc::string8 a_codecvorbis = "Vorbis";
		pfc::string8 a_codecspeex = "Speex";
		pfc::string8 a_codectrueaudio = "True Audio";
		pfc::string8 a_codecwavpack = "WavPack";
		pfc::string8 a_codecwma = "WMA";
		pfc::string8 a_codecaac = "AAC";
		if (a_codec == a_codeccdda)
		{
			cfg_cdda = cfg_cdda + 1;
			cdda = cdda + 1;
		}
		else if (a_codec == a_codecshorten)
		{
			cfg_shorten = cfg_shorten + 1;
			shorten = shorten + 1;
		}
		else if (a_codec == a_codecflac)
		{
			cfg_flac = cfg_flac + 1;
			flac = flac + 1;
		}
		else if (a_codec == a_codecmp3)
		{
			cfg_mp3 = cfg_mp3 + 1;
			mp3 = mp3 + 1;
		}
		else if (a_codec == a_codecmp2)
		{
			cfg_mp2 = cfg_mp2 + 1;
			mp2 = mp2 + 1;
		}
		else if (a_codec == a_codecpcm)
		{
			cfg_pcm = cfg_pcm + 1;
			pcm = pcm + 1;
		}
		else if (a_codec == a_codecmonkeys)
		{
			cfg_monkeys = cfg_monkeys + 1;
			monkeys = monkeys + 1;
		}
		else if (a_codec == a_codectak)
		{
			cfg_tak = cfg_tak + 1;
			tak = tak + 1;
		}
		else if (a_codec == a_codecalac)
		{
			cfg_alac = cfg_alac + 1;
			alac = alac + 1;
		}
		else if (a_codec == a_codecmusepack)
		{
			cfg_musepack = cfg_musepack + 1;
			musepack = musepack + 1;
		}
		else if (a_codec == a_codecoptimfrog)
		{
			cfg_optimfrog = cfg_optimfrog + 1;
			optimfrog = optimfrog + 1;
		}
		else if (a_codec == a_codecdualstream)
		{
			cfg_dualstream = cfg_dualstream + 1;
			dualstream = dualstream + 1;
		}
		else if (a_codec == a_codecvorbis)
		{
			cfg_vorbis = cfg_vorbis + 1;
			vorbis = vorbis + 1;
		}
		else if (a_codec == a_codecspeex)
		{
			cfg_speex = cfg_speex + 1;
			speex = speex + 1;
		}
		else if (a_codec == a_codectrueaudio)
		{
			cfg_trueaudio = cfg_trueaudio + 1;
			trueaudio = trueaudio + 1;
		}
		else if (a_codec == a_codecwavpack)
		{
			cfg_wavpack = cfg_wavpack + 1;
			wavpack = wavpack + 1;
		}
		else if (a_codec == a_codecaac)
		{
			cfg_aac = cfg_aac + 1;
			aac = aac + 1;
		}
		else if (a_codec == a_codecwma)
		{
			cfg_wma = cfg_wma + 1;
			wma = wma + 1;
		}
		else
		{
			cfg_othercodec = cfg_othercodec + 1;
			othercodec = othercodec + 1;
		}
		pfc::string8 a_encoding2 = "lossless";
		pfc::string8 a_encoding3 = "lossy";
		if (a_encoding == a_encoding2)
		{
			cfg_lossless = cfg_lossless + 1;
			lossless = lossless + 1;
		}
		if (a_encoding == a_encoding3)
		{
			cfg_lossy = cfg_lossy + 1;
			lossy = lossy + 1;
		}
		channels = atoi(a_channels);
		sum_rating += atoi(a_rating);
		cfg_sum_rating = cfg_sum_rating + atoi(a_rating);
		sum_playcount += atoi(a_playcount);
		cfg_sum_playcount = cfg_sum_playcount + atoi(a_playcount);
		bitrate = atoi(a_bitrate);
		sum_bitrate += atoi(a_bitrate);
		cfg_sum_bitrate = cfg_sum_bitrate + atoi(a_bitrate);
		sum_filesize += atoi(a_filesize) / 1024 / 1024;
		cfg_sum_filesize = cfg_sum_filesize + atoi(a_filesize) / 1024 / 1024;
		sum_tracklength += atoi(a_tracklength);
		cfg_sum_tracklength = cfg_sum_tracklength + atoi(a_tracklength);
		date = atoi(a_date);
		if (date < 1900 || date > 2100)
		{
			if (average_date < 1900 || average_date > 2100)
			{
				average_date = 2000;
			}
			if (total_average_date < 1900 || total_average_date > 2100)
			{
				total_average_date = 2000;
			}
			date = average_date;
		}
		sum_date += date;
		cfg_sum_date = cfg_sum_date + t_uint32(date);
		samplerate = atoi(a_samplerate);
		if (samplerate == 11025)
		{
			sample11025 = sample11025 + 1;
			cfg_sample11025 = cfg_sample11025 + 1;
		}
		else if (samplerate == 22050)
		{
			sample22050 = sample22050 + 1;
			cfg_sample22050 = cfg_sample22050 + 1;
		}
		else if (samplerate == 44100)
		{
			sample44100 = sample44100 + 1;
			cfg_sample44100 = cfg_sample44100 + 1;
		}
		else if (samplerate == 48000)
		{
			sample48000 = sample48000 + 1;
			cfg_sample48000 = cfg_sample48000 + 1;
		}
		else if (samplerate == 88200)
		{
			sample88200 = sample88200 + 1;
			cfg_sample88200 = cfg_sample88200 + 1;
		}
		else if (samplerate == 96000)
		{
			sample96000 = sample96000 + 1;
			cfg_sample96000 = cfg_sample96000 + 1;
		}
		else if (samplerate == 192000)
		{
			sample192000 = sample192000 + 1;
			cfg_sample192000 = cfg_sample192000 + 1;
		}
		else
		{
			sampleother = sampleother + 1;
			cfg_sampleother = cfg_sampleother + 1;
		}
		bitspersample = atoi(a_bitspersample);
		if (a_encoding == a_encoding2)
		{
			if (bitspersample == 8)
			{
				bits8 = bits8 + 1;
				cfg_bits8 = cfg_bits8 + 1;
			}
			else if (bitspersample == 12)
			{
				bits12 = bits12 + 1;
				cfg_bits12 = cfg_bits12 + 1;
			}
			else if (bitspersample == 16)
			{
				bits16 = bits16 + 1;
				cfg_bits16 = cfg_bits16 + 1;
			}
			else if (bitspersample == 24)
			{
				bits24 = bits24 + 1;
				cfg_bits24 = cfg_bits24 + 1;
			}
			else if (bitspersample == 32)
			{
				bits32 = bits32 + 1;
				cfg_bits32 = cfg_bits32 + 1;
			}
			else
			{
				bitsother = bitsother + 1;
				cfg_bitsother = cfg_bitsother + 1;
			}
		}
		channels = atoi(a_channels);
		if (!(samplerate > 0))
		{
			samplerate = 44100;
		}
		if (!(bitspersample > 0))
		{
			bitspersample = 16;
		}
		if (!(channels > 0))
		{
			channels = 2;
		}
		if (channels == 1)
		{
			cfg_mono = cfg_mono + 1;
			mono = mono + 1;
		}
		else if (channels == 2)
		{
			cfg_stereo = cfg_stereo + 1;
			stereo = stereo + 1;
		}
		else
		{
			cfg_other = cfg_other + 1;
			other = other + 1;
		}
		average_trackplaybacktime = total_playback_time / playback_new_track;
		average_rating = double(sum_rating) / double(playback_new_track);
		average_playcount = double(sum_playcount) / double(playback_new_track);
		average_bitrate = double(sum_bitrate) / double(playback_new_track);
		average_filesize = sum_filesize / playback_new_track;
		average_tracklength = double(sum_tracklength) / double(playback_new_track);
		average_date = sum_date / playback_new_track;
		compression = bitrate * 100000 / samplerate * channels * bitspersample;
		compression = compression / 1000;
		sum_compression += compression;
		average_compression = sum_compression / playback_new_track;
		playbacktime_percent = average_trackplaybacktime * 100 / average_tracklength;
		cfg_sum_compression = cfg_sum_compression + compression;
		if (!cfg_playback_new_track_average == 0)
		{
			total_average_trackplaybacktime = double(cfg_total_playback_time_average) / double(cfg_playback_new_track_average);
			total_average_rating = double(cfg_sum_rating) / double(cfg_playback_new_track_average);
			total_average_playcount = double(cfg_sum_playcount) / double(cfg_playback_new_track_average);
			total_average_bitrate = double(cfg_sum_bitrate) / double(cfg_playback_new_track_average);
			total_average_filesize = cfg_sum_filesize / cfg_playback_new_track_average;
			total_average_tracklength = double(cfg_sum_tracklength) / double(cfg_playback_new_track_average);
			total_average_date = double(cfg_sum_date) / double(cfg_playback_new_track_average);
			total_average_compression = cfg_sum_compression / cfg_playback_new_track_average;
			total_playbacktime_percent = double(total_average_trackplaybacktime) * 100 / double(total_average_tracklength);
		}
	}
	virtual void on_playback_stop(play_control::t_stop_reason p_reason)
	{
		playback_stop++;
		cfg_playback_stop = cfg_playback_stop + 1;
		stop_reason = p_reason;
		switch (p_reason)
		{
		case 0:
			p_reason0++;
			cfg_p_reason0 = cfg_p_reason0 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_stop (user)");
			}
			break;
		case 1:
			p_reason1++;
			cfg_p_reason1 = cfg_p_reason1 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_stop (end of file)");
			}
			break;
		case 2:
			p_reason2++;
			cfg_p_reason2 = cfg_p_reason2 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_stop (starting another)");
			}
			break;
		case 3:
			p_reason3++;
			cfg_p_reason3 = cfg_p_reason3 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_stop (shuting down)");
			}
			break;

		default:
			console::info("error");
		}
	}
	virtual void on_playback_seek(double p_time)
	{
		playback_seek++;
		cfg_playback_seek = cfg_playback_seek + 1;
		seek_time = p_time;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playback: on_playback_seek");
		}
	}
	virtual void on_playback_pause(bool p_state)
	{
		playback_pause++;
		cfg_playback_pause = cfg_playback_pause + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playback: on_playback_pause");
		}
	}
	virtual void on_playback_starting(play_control::t_track_command p_command, bool p_paused)
	{
		playback_starting++;
		cfg_playback_starting = cfg_playback_starting + 1;
		playback_command = p_command;
		switch (p_command)
		{
		case 0:
			playback_command0++;
			cfg_playback_command0 = cfg_playback_command0 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_starting (default)");
			}
			break;
		case 1:
			playback_command1++;
			cfg_playback_command1 = cfg_playback_command1 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_starting (play)");
			}
			break;
		case 2:
			playback_command2++;
			cfg_playback_command2 = cfg_playback_command2 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_starting (next)");
			}
			break;
		case 3:
			playback_command3++;
			cfg_playback_command3 = cfg_playback_command3 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_starting (previous)");
			}
			break;
		case 4:
			playback_command4++;
			cfg_playback_command4 = cfg_playback_command4 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_starting (settrack)");
			}
			break;
		case 5:
			playback_command5++;
			cfg_playback_command5 = cfg_playback_command5 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_starting (random)");
			}
			break;
		case 6:
			playback_command6++;
			cfg_playback_command6 = cfg_playback_command6 + 1;
			if (cfg_main_monitor_events_enabled)
			{
				console::info("playback: on_playback_starting (resume)");
			}
			break;

		default:
			console::info("error");
		}
	}
	virtual void on_playback_edited(metadb_handle_ptr p_track)
	{
		playback_edited++;
		cfg_playback_edited = cfg_playback_edited + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playback: on_playback_edited");
		}
	}
	virtual void on_playback_dynamic_info(const file_info& info)
	{
		playback_dynamic_info++;
		cfg_playback_dynamic_info = cfg_playback_dynamic_info + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playback: on_playback_dynamic_info");
		}
	}
	virtual void on_playback_dynamic_info_track(const file_info& info)
	{
		playback_dynamic_info_track++;
		cfg_playback_dynamic_info_track = cfg_playback_dynamic_info_track + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playback: on_playback_dynamic_info_track");
		}
	}
	virtual void on_playback_time(double p_time)
	{
		total_playback_time++;
		cfg_total_playback_time = cfg_total_playback_time + 1;
		cfg_total_playback_time_average = cfg_total_playback_time_average + 1;
		playback_time = p_time;
	}
	virtual void on_volume_change(float p_new_val)
	{
		volume_new_value = p_new_val;
		volume_change++;
		cfg_volume_change = cfg_volume_change + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playback: on_volume_change");
		}
	}
};

static play_callback_static_factory_t<play_callback_statistics> g_play_callback_statistics;


class playlist_callback_statistics : public playlist_callback_static
{

public:

	virtual unsigned get_flags(void)
	{
		return (flag_on_items_selection_change | flag_on_item_focus_change | flag_on_playlist_activate);
	}
	virtual void on_items_added(t_size p_playlist, t_size p_start, const pfc::list_base_const_t<metadb_handle_ptr>& p_data, const bit_array& p_selection) {}
	virtual void on_items_reordered(t_size p_playlist, const t_size* p_order, t_size p_count) {}
	virtual void on_items_removing(t_size p_playlist, const bit_array& p_mask, t_size p_old_count, t_size p_new_count) {}
	virtual void on_items_removed(t_size p_playlist, const bit_array& p_mask, t_size p_old_count, t_size p_new_count) {}
	virtual void on_items_selection_change(t_size p_playlist, const bit_array& p_affected, const bit_array& p_state)
	{
		items_selection_change++;
		cfg_items_selection_change = cfg_items_selection_change + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playlist: on_items_selection_change");
		}
	}
	virtual void on_item_focus_change(t_size p_playlist, t_size p_from, t_size p_to) {}
	virtual void on_items_modified(t_size p_playlist, const bit_array& p_mask) {}
	virtual void on_items_modified_fromplayback(t_size p_playlist, const bit_array& p_mask, play_control::t_display_level p_level) {};
	virtual void on_items_replaced(t_size p_playlist, const bit_array& p_mask, const pfc::list_base_const_t<t_on_items_replaced_entry>& p_data) {}
	virtual void on_item_ensure_visible(t_size p_playlist, t_size p_idx) {}
	virtual void on_playlist_activate(t_size p_old, t_size p_new)
	{
		playlist_activate++;
		cfg_playlist_activate = cfg_playlist_activate + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playlist: on_playlist_activate");
		}
	}
	virtual void on_playlist_created(t_size p_index, const char* p_name, t_size p_name_len)
	{
		playlist_created++;
		cfg_playlist_created = cfg_playlist_created + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playlist: on_playlist_created");
		}
	}
	virtual void on_playlists_reorder(const t_size* p_order, t_size p_count)
	{
		playlists_reorder++;
		cfg_playlists_reorder = cfg_playlists_reorder + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playlist: on_playlists_reorder");
		}
	}
	virtual void on_playlists_removing(const bit_array& p_mask, t_size p_old_count, t_size p_new_count) {}
	virtual void on_playlists_removed(const bit_array& p_mask, t_size p_old_count, t_size p_new_count)
	{
		playlists_removed++;
		cfg_playlists_removed = cfg_playlists_removed + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playlist: on_playlists_removed");
		}
	}
	virtual void on_playlist_renamed(t_size p_index, const char* p_new_name, t_size p_new_name_len)
	{
		playlist_renamed++;
		cfg_playlist_renamed = cfg_playlist_renamed + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playlist: on_playlist_renamed");
		}
	}
	virtual void on_default_format_changed() {}
	virtual void on_playback_order_changed(t_size p_new_index)
	{
		playback_order_changed++;
		cfg_playback_order_changed = playback_order_changed + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("playlist: on_playback_order_changed");
		}
	}
	virtual void on_playlist_locked(t_size p_playlist, bool p_locked) {}

};

static service_factory_single_t<playlist_callback_statistics> g_playlist_callback_statistics;


class playback_statistics_collector_statistics : public playback_statistics_collector
{

public:

	void on_item_played(metadb_handle_ptr p_item)
	{
		item_played++;
		cfg_item_played = cfg_item_played + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("other: on_item_played");
		}
	}
};

static playback_statistics_collector_factory_t<playback_statistics_collector_statistics> g_playback_statistics_collector_statistics;


class library_callback_statistics : public library_callback
{
	virtual void on_items_added(const pfc::list_base_const_t<metadb_handle_ptr>& p_data)
	{
		library_items_added_count = library_items_added_count + p_data.get_count();
		library_items_added = library_items_added + 1;
		cfg_library_items_added_count = cfg_library_items_added_count + p_data.get_count();
		cfg_library_items_added = cfg_library_items_added + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("library: on_items_added");
		}
	}
	virtual void on_items_removed(const pfc::list_base_const_t<metadb_handle_ptr>& p_data)
	{
		library_items_removed_count = library_items_removed_count + p_data.get_count();
		library_items_removed = library_items_removed + 1;
		cfg_library_items_removed_count = cfg_library_items_removed_count + p_data.get_count();
		cfg_library_items_removed = cfg_library_items_removed + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("library: on_items_removed");
		}
	}
	virtual void on_items_modified(const pfc::list_base_const_t<metadb_handle_ptr>& p_data)
	{
		library_items_modified_count = library_items_modified_count + p_data.get_count();
		library_items_modified = library_items_modified + 1;
		cfg_library_items_modified_count = cfg_library_items_modified_count + p_data.get_count();
		cfg_library_items_modified = cfg_library_items_modified + 1;
		if (cfg_main_monitor_events_enabled)
		{
			console::info("library: on_items_modified");
		}
	}
};

static library_callback_factory_t<library_callback_statistics> library_statistics;
