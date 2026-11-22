/* f_0x101b8850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_101b8850(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_16c;
    uint32_t loc_174;
    uint32_t loc_178;
    uint32_t loc_17c;
    uint32_t loc_180;
    uint32_t loc_184;
    uint32_t loc_188;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 404u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b8874u: eax = g->eax; self = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x188u); in_esi = rd32(sp0 - 0x184u); in_ebp = rd32(sp0 - 0x180u); in_ebx = rd32(sp0 - 0x17cu); g->ebp = rd32(sp0 - 0x180u); g->ebx = rd32(sp0 - 0x17cu); g->edi = rd32(sp0 - 0x188u); g->esi = rd32(sp0 - 0x184u); goto E_101b8874;
    case 0x101b8878u: eax = g->eax; self = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x188u); in_esi = rd32(sp0 - 0x184u); in_ebp = rd32(sp0 - 0x180u); in_ebx = rd32(sp0 - 0x17cu); g->ebp = rd32(sp0 - 0x180u); g->ebx = rd32(sp0 - 0x17cu); g->edi = rd32(sp0 - 0x188u); g->esi = rd32(sp0 - 0x184u); goto E_101b8878;
    case 0x101b8882u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101b8882;
    case 0x101b888cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_16c = rd32(sp0 - 0x16cu); goto E_101b888c;
    case 0x101b889du: ecx = g->ecx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_16c = rd32(sp0 - 0x16cu); goto E_101b889d;
    case 0x101b88a6u: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88a6;
    case 0x101b88abu: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88ab;
    case 0x101b88b3u: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88b3;
    case 0x101b88b8u: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88b8;
    case 0x101b88c1u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88c1;
    case 0x101b88ccu: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88cc;
    case 0x101b88dbu: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88db;
    case 0x101b88e2u: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88e2;
    case 0x101b88e8u: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88e8;
    case 0x101b88eeu: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88ee;
    case 0x101b88f5u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88f5;
    case 0x101b88feu: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b88fe;
    case 0x101b8905u: ecx = g->ecx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8905;
    case 0x101b890au: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b890a;
    case 0x101b8911u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8911;
    case 0x101b8918u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8918;
    case 0x101b891eu: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b891e;
    case 0x101b8929u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8929;
    case 0x101b892du: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b892d;
    case 0x101b893fu: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b893f;
    case 0x101b8948u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8948;
    case 0x101b894eu: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b894e;
    case 0x101b8956u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8956;
    case 0x101b895bu: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b895b;
    case 0x101b8960u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8960;
    case 0x101b8965u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8965;
    case 0x101b896au: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b896a;
    case 0x101b896fu: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b896f;
    case 0x101b8974u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8974;
    case 0x101b8975u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8975;
    case 0x101b8979u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8979;
    case 0x101b897du: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b897d;
    case 0x101b8981u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_178 = rd32(sp0 - 0x178u); loc_174 = rd32(sp0 - 0x174u); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8981;
    case 0x101b89c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b89c3;
    case 0x101b89d5u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b89d5;
    case 0x101b89d9u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b89d9;
    case 0x101b89e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b89e1;
    case 0x101b89e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b89e5;
    case 0x101b89e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b89e9;
    case 0x101b89edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b89ed;
    case 0x101b89f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b89f7;
    case 0x101b89fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b89fb;
    case 0x101b8a02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8a02;
    case 0x101b8a0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8a0c;
    case 0x101b8a10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8a10;
    case 0x101b8a1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8a1d;
    case 0x101b8a38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8a38;
    case 0x101b8a3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8a3a;
    case 0x101b8a46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8a46;
    case 0x101b8a54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a54;
    case 0x101b8a5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a5b;
    case 0x101b8a5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a5f;
    case 0x101b8a63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a63;
    case 0x101b8a67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a67;
    case 0x101b8a71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a71;
    case 0x101b8a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a75;
    case 0x101b8a7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a7f;
    case 0x101b8a82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a82;
    case 0x101b8a86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a86;
    case 0x101b8a8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a8c;
    case 0x101b8a91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a91;
    case 0x101b8a92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8a92;
    case 0x101b8a9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8a9a;
    case 0x101b8aabu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8aab;
    case 0x101b8aafu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8aaf;
    case 0x101b8ab7u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8ab7;
    case 0x101b8abeu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8abe;
    case 0x101b8ac2u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8ac2;
    case 0x101b8ac6u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8ac6;
    case 0x101b8acau: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8aca;
    case 0x101b8ad4u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8ad4;
    case 0x101b8ad7u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8ad7;
    case 0x101b8adbu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8adb;
    case 0x101b8ae1u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8ae1;
    case 0x101b8ae6u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8ae6;
    case 0x101b8ae7u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8ae7;
    case 0x101b8aedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8aed;
    case 0x101b8b27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b27;
    case 0x101b8b35u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b35;
    case 0x101b8b3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8b3b;
    case 0x101b8b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8b48;
    case 0x101b8b54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b8b54;
    case 0x101b8b5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b5b;
    case 0x101b8b6fu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b6f;
    case 0x101b8b75u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b75;
    case 0x101b8b7eu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b7e;
    case 0x101b8b83u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b83;
    case 0x101b8b86u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b86;
    case 0x101b8b88u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b88;
    case 0x101b8b96u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b96;
    case 0x101b8b9du: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b8b9d;
    case 0x101b8bb4u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; edi = g->edi; goto E_101b8bb4;
    case 0x101b8bddu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; edi = g->edi; goto E_101b8bdd;
    case 0x101b8bf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_17c = rd32(sp0 - 0x17cu); loc_16c = rd32(sp0 - 0x16cu); goto E_101b8bf6;
    default: break;
    }
#endif

    COW_AT(101b8850)
    wr32(sp0 - 0x17cu, in_ebx);
    wr32(sp0 - 0x180u, in_ebp);
    wr32(sp0 - 0x184u, in_esi);
    wr32(sp0 - 0x188u, in_edi);
    wr32(sp0 - 0x16cu, self);
    if ((int32_t)rd32(arg6) < 0)
    {
        eax = rd32(arg6);
        goto L_101b8878;
    }
    eax = rd32(arg6);
    COW_AT(101b8874)
    if ((int32_t)eax < (int32_t)arg2)
    {
        ecx = self;
        loc_17c = in_ebx;
        loc_180 = in_ebp;
        loc_184 = in_esi;
        loc_188 = in_edi;
        loc_16c = self;
        goto L_101b888c;
    }
L_101b8878: ;
    COW_AT(101b8878)
    wr32(sp0 - 0x18cu, COW_IMG(0x1037c8f4u));
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x18cu;
    t1 = cow_stdcall(g, COW_IMG(0x101908d0u), 0);
    t2 = g->ecx;
    eax = t1;
    ecx = t2;
    COW_AT(101b8882)
    wr32(self + 0x28u, 0u);
    loc_17c = rd32(sp0 - 0x17cu);
    loc_180 = rd32(sp0 - 0x180u);
    loc_184 = rd32(sp0 - 0x184u);
    loc_188 = rd32(sp0 - 0x188u);
    loc_16c = rd32(sp0 - 0x16cu);
L_101b888c: ;
    COW_AT(101b888c)
    if ((int32_t)arg2 <= 1)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(101b889d)
        edx = 0u;
        esi = arg1;
L_101b88a6: ;
    COW_AT(101b88a6)
        t3 = rd8(esi);
        if ((uint8_t)t3 != 0x7fu) goto L_101b88b8;
    COW_AT(101b88ab)
        if (rd8(arg1 + edx + 1u) == 0xffu) goto L_101b88c1;
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx + 1u);
    COW_AT(101b88b3)
        if ((uint8_t)ecx == 0xfeu) goto L_101b88c1;
L_101b88b8: ;
    COW_AT(101b88b8)
        if ((int32_t)(esi - arg1 + 2u) < (int32_t)arg2)
        {
            ecx = esi - arg1 + 2u;
            edx = edx + 1u;
            esi = esi + 1u;
            goto L_101b88a6;
        }
        edx = edx + 1u;
    }
L_101b88c1: ;
    COW_AT(101b88c1)
    if (edx + 1u == arg2)
    {
        eax = 0xffffffffu;
        goto L_101b8bf6;
    }
    ecx = edx + 1u;
    COW_AT(101b88cc)
    wr32(sp0 - 0x174u, edx);
    if ((int32_t)(ecx + 1u) >= (int32_t)arg2)
    {
        esi = edx;
        loc_174 = edx;
        goto L_101b88ee;
    }
    esi = edx;
    loc_174 = edx;
    edx = ecx + 1u;
L_101b88db: ;
    COW_AT(101b88db)
    t4 = rd8(arg1 + edx - 1u);
    if ((uint8_t)t4 != 0x7fu) goto L_101b88e8;
    COW_AT(101b88e2)
    t5 = rd8(arg1 + ecx + 1u);
    if ((uint8_t)t5 == 0xffu) goto L_101b88ee;
L_101b88e8: ;
    COW_AT(101b88e8)
    if ((int32_t)(edx + 1u) < (int32_t)arg2)
    {
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_101b88db;
    }
    ecx = ecx + 1u;
L_101b88ee: ;
    COW_AT(101b88ee)
    if ((int32_t)(ecx + 1u) >= (int32_t)arg2)
    {
        edi = 0u;
    }
    else
    {
    COW_AT(101b88f5)
        wr32(sp0 - 0x170u, ecx);
        edi = 1u;
    }
    COW_AT(101b88fe)
    if ((int32_t)arg2 <= 1)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(101b8905)
        ecx = 1u;
        edx = 0u;
L_101b890a: ;
    COW_AT(101b890a)
        t6 = rd8(arg1 + ecx - 1u);
        if ((uint8_t)t6 != 0x7fu) goto L_101b8918;
    COW_AT(101b8911)
        t7 = rd8(arg1 + edx + 1u);
        if ((uint8_t)t7 == 0xfeu) goto L_101b891e;
L_101b8918: ;
    COW_AT(101b8918)
        if ((int32_t)(ecx + 1u) < (int32_t)arg2)
        {
            ecx = ecx + 1u;
            edx = edx + 1u;
            goto L_101b890a;
        }
        edx = edx + 1u;
    }
L_101b891e: ;
    COW_AT(101b891e)
    wr32(sp0 - 0x178u, edx);
    if ((int32_t)(edx + 1u) < (int32_t)arg2)
    {
        loc_178 = edx;
    }
    else
    {
    COW_AT(101b8929)
        wr32(sp0 - 0x178u, esi);
        loc_178 = esi;
    }
    COW_AT(101b892d)
    if ((int32_t)loc_174 >= (int32_t)rd32(arg6))
    {
        ecx = loc_174;
        esi = rd32(arg6);
    COW_AT(101b8948)
        if ((int32_t)esi <= 0)
        {
            edx = 0u;
            goto L_101b8979;
        }
        edx = 0u;
L_101b894e: ;
    COW_AT(101b894e)
        if (rd8(arg1 + edx) < 0x80u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx);
            goto L_101b895b;
        }
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx);
    COW_AT(101b8956)
        if ((uint8_t)ecx <= 0x9fu) goto L_101b8965;
L_101b895b: ;
    COW_AT(101b895b)
        if ((uint8_t)ecx < 0xe0u) goto L_101b896a;
    COW_AT(101b8960)
        if ((uint8_t)ecx > 0xffu) goto L_101b896a;
L_101b8965: ;
    COW_AT(101b8965)
        edx = edx + 2u;
L_101b8975: ;
    COW_AT(101b8975)
        if ((int32_t)edx < (int32_t)esi) goto L_101b894e;
L_101b8979: ;
    COW_AT(101b8979)
        if (edx != esi)
        {
    COW_AT(101b897d)
            wr32(arg6, esi - 1u);
            loc_17c = rd32(sp0 - 0x17cu);
            loc_180 = rd32(sp0 - 0x180u);
            loc_184 = rd32(sp0 - 0x184u);
            loc_188 = rd32(sp0 - 0x188u);
            loc_16c = rd32(sp0 - 0x16cu);
            loc_174 = rd32(sp0 - 0x174u);
            loc_178 = rd32(sp0 - 0x178u);
        }
    }
    else
    {
    COW_AT(101b893f)
        wr32(arg6, 0u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_180 = rd32(sp0 - 0x180u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_188 = rd32(sp0 - 0x188u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_178 = rd32(sp0 - 0x178u);
    }
    COW_AT(101b8981)
    t8 = rd32(edi * 4u + sp0 - 0x174u) - rd32(arg6);
    t9 = rd32(arg6);
    esi = arg1 + t9;
    edi = sp0 - 0x168u;
    ecx = t8 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t8 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(sp0 + t8 - 0x168u, 0x7fu);
    wr8(sp0 + t8 - 0x167u, 0xffu);
    wr32(sp0 - 0x18cu, sp0 - 0x168u);
    wr8(sp0 + t8 - 0x166u, 0u);
    g->edx = t8;
    g->esp = sp0 - 0x178u;
    t10 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x168u, ecx, g->edx, 1, 5, rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu));
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    esi = t8 + 2u;
    COW_AT(101b89c3)
    if ((int32_t)eax <= (int32_t)arg5)
    {
        edi = 0u;
        goto L_101b8a1d;
    }
    ebp = eax;
    edi = 0u;
L_101b89d5: ;
    COW_AT(101b89d5)
    if ((int32_t)edi >= (int32_t)esi) goto L_101b8a1d;
    COW_AT(101b89d9)
    if (rd8(edi + sp0 - 0x168u) < 0x80u)
    {
        eax = (arg5 & 0xffffff00u) | rd8(edi + sp0 - 0x168u);
        goto L_101b89e5;
    }
    eax = (arg5 & 0xffffff00u) | rd8(edi + sp0 - 0x168u);
    COW_AT(101b89e1)
    if ((uint8_t)eax <= 0x9fu) goto L_101b89ed;
L_101b89e5: ;
    COW_AT(101b89e5)
    if ((uint8_t)eax < 0xe0u) goto L_101b89f7;
    COW_AT(101b89e9)
    if ((uint8_t)eax > 0xffu) goto L_101b89f7;
L_101b89ed: ;
    COW_AT(101b89ed)
    eax = 0xeu;
    edi = edi + 2u;
L_101b8a10: ;
    COW_AT(101b8a10)
    if ((int32_t)(ebp - eax) > (int32_t)arg5)
    {
        ebp = ebp - eax;
        goto L_101b89d5;
    }
L_101b8a1d: ;
    COW_AT(101b8a1d)
    t17 = edi + rd32(arg6);
    wr32(arg6, t17);
    if ((int32_t)rd32(sp0 - 0x174u) >= (int32_t)rd32(arg6))
    {
        eax = rd32(sp0 - 0x178u);
    }
    else
    {
        eax = rd32(sp0 - 0x178u);
    COW_AT(101b8a38)
        edx = 0u;
L_101b8a3a: ;
    COW_AT(101b8a3a)
        t18 = rd32(arg6);
        if ((int32_t)t18 <= 0) goto L_101b8a9a;
    COW_AT(101b8a46)
        t19 = rd32(arg6);
        if ((int32_t)t19 <= 0) goto L_101b8a86;
        ecx = 0u;
L_101b8a54: ;
    COW_AT(101b8a54)
        if (rd8(arg1 + ecx) < 0x80u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
            goto L_101b8a5f;
        }
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
    COW_AT(101b8a5b)
        if ((uint8_t)eax <= 0x9fu) goto L_101b8a67;
L_101b8a5f: ;
    COW_AT(101b8a5f)
        if ((uint8_t)eax < 0xe0u) goto L_101b8a71;
    COW_AT(101b8a63)
        if ((uint8_t)eax > 0xffu) goto L_101b8a71;
L_101b8a67: ;
    COW_AT(101b8a67)
        eax = 1u;
        ecx = ecx + 2u;
L_101b8a82: ;
    COW_AT(101b8a82)
        if ((int32_t)ecx < (int32_t)rd32(arg6)) goto L_101b8a54;
L_101b8a86: ;
    COW_AT(101b8a86)
        if (eax == 0u)
        {
            ecx = rd32(arg6);
    COW_AT(101b8a91)
            ecx = ecx - 1u;
        }
        else
        {
            ecx = rd32(arg6);
    COW_AT(101b8a8c)
            ecx = ecx - 2u;
        }
    COW_AT(101b8a92)
        wr32(arg6, ecx);
        if ((int32_t)(edx + 1u) < 5)
        {
            edx = edx + 1u;
            goto L_101b8a3a;
        }
    }
L_101b8a9a: ;
    COW_AT(101b8a9a)
    if ((int32_t)rd32(sp0 - 0x174u) >= (int32_t)rd32(arg6)) goto L_101b8aed;
    ecx = rd32(arg6);
    esi = rd32(sp0 - 0x174u);
L_101b8aab: ;
    COW_AT(101b8aab)
    if ((int32_t)ecx <= 0) goto L_101b8aed;
    COW_AT(101b8aaf)
    if ((int32_t)rd32(arg6) <= 0) goto L_101b8adb;
    ecx = 0u;
L_101b8ab7: ;
    COW_AT(101b8ab7)
    if (rd8(arg1 + ecx) < 0x80u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
        goto L_101b8ac2;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
    COW_AT(101b8abe)
    if ((uint8_t)eax <= 0x9fu) goto L_101b8aca;
L_101b8ac2: ;
    COW_AT(101b8ac2)
    if ((uint8_t)eax < 0xe0u) goto L_101b8ad4;
    COW_AT(101b8ac6)
    if ((uint8_t)eax > 0xffu) goto L_101b8ad4;
L_101b8aca: ;
    COW_AT(101b8aca)
    eax = 1u;
    ecx = ecx + 2u;
L_101b8ad7: ;
    COW_AT(101b8ad7)
    if ((int32_t)ecx < (int32_t)rd32(arg6)) goto L_101b8ab7;
L_101b8adb: ;
    COW_AT(101b8adb)
    if (eax == 0u)
    {
        ecx = rd32(arg6);
    COW_AT(101b8ae6)
        ecx = ecx - 1u;
    }
    else
    {
        ecx = rd32(arg6);
    COW_AT(101b8ae1)
        ecx = ecx - 2u;
    }
    COW_AT(101b8ae7)
    wr32(arg6, ecx);
    if ((int32_t)esi < (int32_t)ecx) goto L_101b8aab;
L_101b8aed: ;
    COW_AT(101b8aed)
    t20 = arg2 - rd32(arg6);
    t21 = rd32(arg6);
    esi = arg1 + t21;
    edi = sp0 - 0x168u;
    ecx = t20 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x18cu, sp0 - 0x168u);
    ecx = t20 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(sp0 + t20 - 0x168u, 0u);
    g->edx = t20;
    g->esp = sp0 - 0x178u;
    t22 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x168u, ecx, g->edx, 1, 5, rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu));
    t23 = g->edx;
    eax = t22;
    edx = t23;
    ebp = t20;
    COW_AT(101b8b27)
    if ((int32_t)eax <= (int32_t)arg5)
    {
        ecx = arg5;
    }
    else
    {
    COW_AT(101b8b35)
        edi = rd32(sp0 - 0x16cu);
L_101b8b3b: ;
    COW_AT(101b8b3b)
        wr32(sp0 - 0x18cu, ebp);
        wr32(sp0 - 0x190u, sp0 - 0x168u);
        g->eax = eax;
        g->esp = sp0 - 0x188u;
        t24 = cow_thiscall(g, COW_IMG(0x101b8c10u), edi, 2, sp0 - 0x168u, ebp);
        t25 = g->ecx;
        eax = t24;
        ecx = t25;
    COW_AT(101b8b48)
        wr32(sp0 - 0x18cu, sp0 - 0x168u);
        g->edx = sp0 - 0x168u;
        g->esp = sp0 - 0x178u;
        t26 = cow_call_regs(g, COW_IMG(0x10190830u), eax, ecx, g->edx, 1, 5, sp0 - 0x168u, rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu));
        t27 = g->ecx;
        t28 = g->edx;
        ecx = t27;
        edx = t28;
        ebp = eax;
        eax = t26;
    COW_AT(101b8b54)
        if ((int32_t)eax > (int32_t)arg5) goto L_101b8b3b;
    }
    COW_AT(101b8b5b)
    if ((int32_t)rd32(arg6) < 0) goto L_101b8b96;
    eax = rd32(arg6);
L_101b8b6f: ;
    COW_AT(101b8b6f)
    t29 = rd8(arg1 + eax);
    if ((uint8_t)t29 != 0x7fu) goto L_101b8b83;
    COW_AT(101b8b75)
    if ((int8_t)rd8(arg1 + eax + 1u) < 100)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
        goto L_101b8b83;
    }
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
    COW_AT(101b8b7e)
    if ((int8_t)ecx <= 103) goto L_101b8b88;
L_101b8b83: ;
    COW_AT(101b8b83)
    if ((int32_t)(eax - 1u) >= 0)
    {
        eax = eax - 1u;
        goto L_101b8b6f;
    }
    COW_AT(101b8b86)
L_101b8b96: ;
    COW_AT(101b8b96)
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, 0x64u);
L_101b8b9d: ;
    COW_AT(101b8b9d)
    if ((int32_t)rd32(sp0 - 0x178u) >= (int32_t)rd32(arg6))
    {
        ecx = ebp;
        goto L_101b8bdd;
    }
    ecx = ebp;
    COW_AT(101b8bb4)
    wr8(arg3 + 2u, 0x7fu);
    wr8(arg3 + 3u, 0xfeu);
    t30 = ecx;
    esi = sp0 - 0x168u;
    edi = arg3 + 4u;
    ecx = t30 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t30 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->ebx = rd32(sp0 - 0x17cu);
    g->esi = rd32(sp0 - 0x184u);
    g->edi = rd32(sp0 - 0x188u);
    g->ebp = rd32(sp0 - 0x180u);
    g->edx = t30;
    return ebp + 4u;
L_101b896a: ;
    COW_AT(101b896a)
    if ((uint8_t)ecx != 0x7fu)
    {
    COW_AT(101b8974)
        edx = edx + 1u;
    }
    else
    {
    COW_AT(101b896f)
        edx = edx + 2u;
    }
    goto L_101b8975;
L_101b89f7: ;
    COW_AT(101b89f7)
    if ((uint8_t)eax != 0x7fu)
    {
    COW_AT(101b8a02)
        t13 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)eax;
        wr32(sp0 - 0x18cu, t13);
        g->eax = eax;
        g->ecx = t13;
        g->edx = edx;
        g->esp = sp0 - 0x188u;
        t14 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t13);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    COW_AT(101b8a0c)
        edi = edi + 1u;
    }
    else
    {
    COW_AT(101b89fb)
        eax = 0u;
        edi = edi + 2u;
    }
    goto L_101b8a10;
L_101b8a71: ;
    COW_AT(101b8a71)
    if ((uint8_t)eax != 0x7fu)
    {
    COW_AT(101b8a7f)
        eax = 0u;
        ecx = ecx + 1u;
    }
    else
    {
    COW_AT(101b8a75)
        eax = 1u;
        ecx = ecx + 2u;
    }
    goto L_101b8a82;
L_101b8ad4: ;
    COW_AT(101b8ad4)
    eax = 0u;
    ecx = ecx + 1u;
    goto L_101b8ad7;
L_101b8b88: ;
    COW_AT(101b8b88)
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, rd8(arg1 + eax + 1u));
    if ((int32_t)eax >= 0) goto L_101b8b9d;
    goto L_101b8b96;
L_101b8bdd: ;
    COW_AT(101b8bdd)
    t31 = ecx;
    esi = sp0 - 0x168u;
    edi = arg3 + 2u;
    ecx = t31 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t31 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg3 + ebp + 2u, 0u);
    eax = ebp + 2u;
    edx = arg3;
    loc_17c = rd32(sp0 - 0x17cu);
    loc_180 = rd32(sp0 - 0x180u);
    loc_184 = rd32(sp0 - 0x184u);
    loc_188 = rd32(sp0 - 0x188u);
L_101b8bf6: ;
    COW_AT(101b8bf6)
    g->ebx = loc_17c;
    g->esi = loc_184;
    g->edi = loc_188;
    g->ebp = loc_180;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b8850(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b8874u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x188u);
        in_esi = rd32(sp0 - 0x184u);
        in_ebp = rd32(sp0 - 0x180u);
        in_ebx = rd32(sp0 - 0x17cu);
        g->esp = sp0 - 0x188u;
        g->ebp = arg2;
        g->esi = self;
        wr32(sp0 - 0x16cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101b8878u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x188u);
        in_esi = rd32(sp0 - 0x184u);
        in_ebp = rd32(sp0 - 0x180u);
        in_ebx = rd32(sp0 - 0x17cu);
        g->esp = sp0 - 0x188u;
        g->ebp = arg2;
        g->esi = self;
        wr32(sp0 - 0x16cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101b8882u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b888cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b889du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b88a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->edi = 1u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b88abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->edi = 1u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b88b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->edi = 1u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b88b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->edi = 1u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b88c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b88ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b88dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b88e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b88e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b88eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b88f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b88feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b8905u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b890au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b8911u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b8918u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b891eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b8929u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b892du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b893fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8948u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b894eu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8956u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b895bu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8960u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8965u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b896au:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b896fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8974u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8975u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8979u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b897du:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8981u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_174;
        uint32_t loc_178;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_178 = rd32(sp0 - 0x178u);
        loc_174 = rd32(sp0 - 0x174u);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        g->eax = 0xffffffffu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b89c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b89d5u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->eax = arg5;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b89d9u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->eax = arg5;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b89e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b89e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b89e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b89edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b89f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b89fbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8a02u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8a0cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8a10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8a1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8a38u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8a3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8a46u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8a54u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a5bu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a5fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a63u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a67u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a71u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a75u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a7fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a82u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a86u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a8cu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a91u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a92u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101b8a9au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8aabu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8aafu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8ab7u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8abeu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8ac2u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8ac6u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8acau:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8ad4u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8ad7u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8adbu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8ae1u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8ae6u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8ae7u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg6;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8aedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8b27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8b35u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ecx = arg5;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8b3bu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x101b8b48u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        g->esi = arg5;
        wr32(sp0 - 0x190u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x101b8b54u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x18cu;
        g->ebx = arg1;
        g->esi = arg5;
        wr32(sp0 - 0x190u, sp0 - 0x168u);
        wr32(sp0 - 0x18cu, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x101b8b5bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8b6fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8b75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8b7eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8b83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8b86u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b8b88u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b8b96u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b8b9du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b8bb4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        g->esi = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x101b8bddu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x188u;
        g->edx = arg3;
        g->esi = sp0 - 0x168u;
        (void)sp0;
        return 1;
    }
    case 0x101b8bf6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_16c;
        uint32_t loc_17c;
        uint32_t loc_180;
        uint32_t loc_184;
        uint32_t loc_188;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_17c = rd32(sp0 - 0x17cu);
        loc_16c = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x188u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b8850(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b8850(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
