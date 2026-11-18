/* f_0x102db85a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102db85a(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_49c;
    uint32_t loc_4a0;
    uint32_t loc_4a4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t3;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1212u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102db8c4u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db8c4;
    case 0x102db8cdu: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db8cd;
    case 0x102db8d2u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db8d2;
    case 0x102db8d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db8d7;
    case 0x102db8e1u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db8e1;
    case 0x102db8fau: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db8fa;
    case 0x102db925u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db925;
    case 0x102db92au: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db92a;
    case 0x102db953u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db953;
    case 0x102db990u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db990;
    case 0x102db994u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db994;
    case 0x102db9adu: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db9ad;
    case 0x102db9f6u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db9f6;
    case 0x102db9f8u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102db9f8;
    case 0x102dba08u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102dba08;
    case 0x102dba74u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102dba74;
    case 0x102dba8au: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4a4u); in_esi = rd32(sp0 - 0x4a0u); in_ebx = rd32(sp0 - 0x49cu); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x49cu); g->edi = rd32(sp0 - 0x4a4u); g->esi = rd32(sp0 - 0x4a0u); goto E_102dba8a;
    case 0x102dbaa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dbaa6;
    case 0x102dbabbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dbabb;
    case 0x102dbae0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102dbae0;
    case 0x102dbafbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dbafb;
    case 0x102dbb12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_102dbb12;
    case 0x102dbb1au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102dbb1a;
    case 0x102dbb1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102dbb1e;
    case 0x102dbb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102dbb32;
    case 0x102dbb34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_4a4 = rd32(sp0 - 0x4a4u); loc_4a0 = rd32(sp0 - 0x4a0u); loc_49c = rd32(sp0 - 0x49cu); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102dbb34;
    default: break;
    }
#endif

    COW_AT(102db85a)
    wr32(sp0 - 4u, in_ebp);
    wr8(sp0 - 0x10u, 0u);
    wr8(sp0 - 0xfu, 0u);
    wr8(sp0 - 0xeu, 0u);
    wr8(sp0 - 0xdu, 0u);
    wr8(sp0 - 8u, 0u);
    wr8(sp0 - 5u, rd8(sp0 - 5u) | 0xffu);
    wr8(sp0 - 0x18u, 0u);
    wr8(sp0 - 0x11u, rd8(sp0 - 0x11u) | 0xffu);
    wr32(sp0 - 0x49cu, in_ebx);
    wr32(sp0 - 0x4a0u, in_esi);
    wr32(sp0 - 0x4a4u, in_edi);
    wr32(sp0 - 0x4a8u, 0x1bu);
    edi = sp0 - 0x98u;
    eax = 0u;
    ecx = 0x1bu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(self);
    wr8(sp0 - 7u, 0x55u);
    wr8(sp0 - 6u, 0xaau);
    wr8(sp0 - 0x17u, 0x24u);
    wr8(sp0 - 0x16u, 0x49u);
    wr8(sp0 - 0x15u, 0x6du);
    wr8(sp0 - 0x14u, 0x92u);
    wr8(sp0 - 0x13u, 0xb6u);
    wr8(sp0 - 0x12u, 0xdbu);
    wr32(sp0 - 0xcu, 0u);
    if (t1 == 0x14u) goto L_102db9f8;
    eax = t1;
    COW_AT(102db8c4)
    if (eax == 0x1bu) goto L_102db994;
    COW_AT(102db8cd)
    if (eax == 0x29u) goto L_102db92a;
    COW_AT(102db8d2)
    if (eax == 0x32u) goto L_102db8e1;
    COW_AT(102db8d7)
    eax = 0x80004005u;
    loc_4 = in_ebp;
    loc_49c = in_ebx;
    loc_4a0 = in_esi;
    loc_4a4 = in_edi;
L_102dbb34: ;
    COW_AT(102dbb34)
    g->ebx = loc_49c;
    g->esi = loc_4a0;
    g->edi = loc_4a4;
    g->ebp = loc_4;
    return eax;
L_102db8e1: ;
    COW_AT(102db8e1)
    wr32(sp0 - 0x98u, 0x28u);
    wr32(sp0 - 0x88u, 0u);
    wr16(sp0 - 0x8au, 8u);
    wr32(sp0 - 0xcu, 0x400u);
    ecx = 0u;
L_102db8fa: ;
    COW_AT(102db8fa)
    wr8(ecx * 4u + sp0 - 0x495u, 0u);
    wr8(ecx * 4u + sp0 - 0x496u, (uint8_t)ecx);
    wr8(ecx * 4u + sp0 - 0x497u, (uint8_t)ecx);
    wr8(ecx * 4u + sp0 - 0x498u, (uint8_t)ecx);
    if (ecx + 1u < 0x100u)
    {
        ecx = ecx + 1u;
        goto L_102db8fa;
    }
    COW_AT(102db925)
    loc_c = 0x400u;
L_102dba08: ;
    COW_AT(102dba08)
    wr32(sp0 - 0x80u, 0xb12u);
    wr32(sp0 - 0x7cu, 0xb12u);
    t7 = rd32(self + 0xcu);
    wr32(sp0 - 0x94u, t7);
    t8 = rd32(self + 0x10u);
    wr32(sp0 - 0x90u, t8);
    t9 = t7 * (rd16(sp0 - 0x8au) >> 3u);
    wr32(sp0 - 8u, t9);
    t10 = t9 + 3u & 0xfffffffcu;
    wr32(sp0 - 0x14u, t10);
    t11 = rd16(sp0 - 0x8au);
    edi = sp0 - 0x2cu;
    eax = 0u;
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(sp0 - 0x1cu, t11 >> 3u);
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    t12 = loc_c + t8 * (t9 + 3u & 0xfffffffcu) + 0x39u & 0xfffffffcu;
    wr32(sp0 - 0x2au, t12);
    wr16(sp0 - 0x8cu, 1u);
    wr16(sp0 - 0x2cu, 0x4d42u);
    wr32(sp0 - 0x22u, loc_c + 0x36u);
    if (arg2 == 0u)
    {
        ecx = loc_c + t8 * (t9 + 3u & 0xfffffffcu) + 0x36u;
        esi = (loc_c + t8 * (t9 + 3u & 0xfffffffcu) + 0x39u & 0xfffffffcu) - (loc_c + t8 * (t9 + 3u & 0xfffffffcu) + 0x36u);
        loc_8 = t9;
        loc_14 = t10;
        loc_1c = t11 >> 3u;
    }
    else
    {
        ecx = loc_c + t8 * (t9 + 3u & 0xfffffffcu) + 0x36u;
        esi = (loc_c + t8 * (t9 + 3u & 0xfffffffcu) + 0x39u & 0xfffffffcu) - (loc_c + t8 * (t9 + 3u & 0xfffffffcu) + 0x36u);
        loc_8 = t9;
        loc_14 = t10;
        loc_1c = t11 >> 3u;
    COW_AT(102dba74)
        wr32(sp0 - 0x4a8u, 0u);
        wr32(sp0 - 0x4acu, sp0 + 8u);
        wr32(sp0 - 0x4b0u, 0xeu);
        wr32(sp0 - 0x4b4u, sp0 - 0x2cu);
        wr32(sp0 - 0x4b8u, arg1);
        g->ecx = ecx;
        g->esp = sp0 - 0x4a4u;
        cow_stdcall(g, rd32(COW_IMG(0x10329240u)), 5, arg1, sp0 - 0x2cu, 0xeu, sp0 + 8u, 0u);   /* kernel32.dll!WriteFile */
        t13 = g->ecx;
        ecx = t13;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(102dba8a)
    wr32(sp0 - 0x4a8u, 0u);
    wr32(sp0 - 0x4acu, sp0 + 8u);
    wr32(sp0 - 0x4b0u, 0x28u);
    wr32(sp0 - 0x4b4u, sp0 - 0x98u);
    wr32(sp0 - 0x4b8u, arg1);
    g->ecx = ecx;
    g->edx = 0u;
    t14 = rd32(COW_IMG(0x10329240u));
    g->esp = sp0 - 0x4a4u;
    cow_stdcall(g, t14, 5, arg1, sp0 - 0x98u, 0x28u, sp0 + 8u, 0u);   /* kernel32.dll!WriteFile */
    t15 = g->ecx;
    t16 = g->edx;
    if (rd32(sp0 - 0xcu) != 0u)
    {
        ecx = t15;
        edx = t16;
        edi = t14;
    COW_AT(102dbaa6)
        wr32(sp0 - 0x4a8u, 0u);
        wr32(sp0 - 0x4acu, sp0 + 8u);
        t17 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x4b0u, t17);
        wr32(sp0 - 0x4b4u, sp0 - 0x498u);
        wr32(sp0 - 0x4b8u, arg1);
        g->esp = sp0 - 0x4a4u;
        cow_thiscall(g, edi, ecx, 5, arg1, sp0 - 0x498u, t17, sp0 + 8u, 0u);
    }
    COW_AT(102dbabb)
    t18 = rd32(self + 4u) + rd32(self + 0x18u) * rd32(sp0 - 0x1cu) + rd32(self + 0x1cu) * rd32(self + 0x30u);
    t19 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x1cu, t18);
    if (rd32(self + 4u) + rd32(self + 0x18u) * t19 + rd32(self + 0x1cu) * rd32(self + 0x30u) + (rd32(self + 0x10u) - 1u) * rd32(self + 0x30u) < rd32(self + 4u) + rd32(self + 0x18u) * t19 + rd32(self + 0x1cu) * rd32(self + 0x30u))
    {
        ecx = rd32(self + 0x30u);
        edx = rd32(self + 0x18u) * t19;
        goto L_102dbb1a;
    }
    ecx = rd32(self + 0x30u);
    edx = rd32(self + 0x18u) * t19;
    edi = rd32(self + 4u) + rd32(self + 0x18u) * t19 + rd32(self + 0x1cu) * rd32(self + 0x30u) + (rd32(self + 0x10u) - 1u) * rd32(self + 0x30u);
    loc_1c = t18;
L_102dbae0: ;
    COW_AT(102dbae0)
    wr32(sp0 - 0x4a8u, 0u);
    wr32(sp0 - 0x4acu, sp0 + 8u);
    t20 = rd32(sp0 - 8u);
    wr32(sp0 - 0x4b0u, t20);
    wr32(sp0 - 0x4b4u, edi);
    wr32(sp0 - 0x4b8u, arg1);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4a4u;
    cow_stdcall(g, rd32(COW_IMG(0x10329240u)), 5, arg1, edi, t20, sp0 + 8u, 0u);   /* kernel32.dll!WriteFile */
    t21 = g->ecx;
    t22 = g->edx;
    if (rd32(sp0 - 8u) >= rd32(sp0 - 0x14u))
    {
        ecx = t21;
        edx = t22;
    }
    else
    {
        eax = rd32(sp0 - 0x14u);
        edx = t22;
    COW_AT(102dbafb)
        wr32(sp0 - 0x4a8u, 0u);
        wr32(sp0 - 0x4acu, sp0 + 8u);
        t23 = eax - rd32(sp0 - 8u);
        wr32(sp0 - 0x4b0u, t23);
        wr32(sp0 - 0x4b4u, sp0 - 0x10u);
        wr32(sp0 - 0x4b8u, arg1);
        g->ecx = sp0 + 8u;
        g->edx = edx;
        g->esp = sp0 - 0x4a4u;
        cow_stdcall(g, rd32(COW_IMG(0x10329240u)), 5, arg1, sp0 - 0x10u, t23, sp0 + 8u, 0u);   /* kernel32.dll!WriteFile */
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    }
    COW_AT(102dbb12)
    if (edi - rd32(self + 0x30u) >= rd32(sp0 - 0x1cu))
    {
        edi = edi - rd32(self + 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_102dbae0;
    }
L_102dbb1a: ;
    COW_AT(102dbb1a)
    if (esi != 0u)
    {
    COW_AT(102dbb1e)
        wr32(sp0 - 0x4a8u, 0u);
        wr32(sp0 - 0x4acu, sp0 + 8u);
        wr32(sp0 - 0x4b0u, esi);
        wr32(sp0 - 0x4b4u, sp0 - 0x10u);
        wr32(sp0 - 0x4b8u, arg1);
        g->esp = sp0 - 0x4a4u;
        cow_stdcall(g, rd32(COW_IMG(0x10329240u)), 5, arg1, sp0 - 0x10u, esi, sp0 + 8u, 0u);   /* kernel32.dll!WriteFile */
    }
    COW_AT(102dbb32)
    eax = 0u;
    loc_4 = rd32(sp0 - 4u);
    loc_49c = rd32(sp0 - 0x49cu);
    loc_4a0 = rd32(sp0 - 0x4a0u);
    loc_4a4 = rd32(sp0 - 0x4a4u);
    goto L_102dbb34;
L_102db92a: ;
    COW_AT(102db92a)
    t2 = rd32(self + 8u);
    wr32(sp0 - 0x98u, 0x28u);
    wr32(sp0 - 0x88u, 0u);
    wr16(sp0 - 0x8au, 8u);
    wr32(sp0 - 0xcu, 0x400u);
    ecx = t2 - (sp0 - 0x497u);
    esi = t2 + 2u;
    edi = 0u;
L_102db953: ;
    COW_AT(102db953)
    t3 = rd8(ecx + edi * 4u + sp0 - 0x497u);
    wr8(edi * 4u + sp0 - 0x496u, (uint8_t)t3);
    t4 = rd8(esi - 1u);
    wr8(edi * 4u + sp0 - 0x497u, (uint8_t)t4);
    t5 = rd8(esi);
    wr8(edi * 4u + sp0 - 0x495u, 0u);
    wr8(edi * 4u + sp0 - 0x498u, (uint8_t)t5);
    if (edi + 1u < 0x100u)
    {
        esi = esi + 4u;
        edi = edi + 1u;
        goto L_102db953;
    }
    COW_AT(102db990)
    loc_c = 0x400u;
    goto L_102dba08;
L_102db994: ;
    COW_AT(102db994)
    wr32(sp0 - 0x98u, 0x28u);
    wr32(sp0 - 0x88u, 0u);
    wr16(sp0 - 0x8au, 8u);
    wr32(sp0 - 0xcu, 0x400u);
    esi = 0u;
L_102db9ad: ;
    COW_AT(102db9ad)
    t6 = rd8(sp0 + (esi >> 5u) - 0x18u);
    wr8(esi * 4u + sp0 - 0x495u, 0u);
    wr8(esi * 4u + sp0 - 0x496u, (uint8_t)t6);
    wr8(esi * 4u + sp0 - 0x497u, rd8(sp0 + (esi >> 2u & 7u) - 0x18u));
    wr8(esi * 4u + sp0 - 0x498u, rd8(sp0 + (esi & 3u) - 8u));
    if (esi + 1u < 0x100u)
    {
        esi = esi + 1u;
        goto L_102db9ad;
    }
    COW_AT(102db9f6)
    loc_c = 0x400u;
    goto L_102dba08;
L_102db9f8: ;
    COW_AT(102db9f8)
    wr32(sp0 - 0x98u, 0x28u);
    wr32(sp0 - 0x88u, 0u);
    wr16(sp0 - 0x8au, 0x18u);
    loc_c = 0u;
    goto L_102dba08;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102db85a(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102db8c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102db8cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102db8d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102db8d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102db8e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102db8fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xcu, 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102db925u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xcu, 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102db92au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102db953u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xcu, 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102db990u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xcu, 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102db994u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102db9adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xcu, 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102db9f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xcu, 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102db9f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dba08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102dba74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102dba8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4a4u);
        in_esi = rd32(sp0 - 0x4a0u);
        in_ebx = rd32(sp0 - 0x49cu);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->edx = 0u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102dbaa6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x4b4u, sp0 - 0x98u);
        wr32(sp0 - 0x4acu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102dbabbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x4acu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102dbae0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x4acu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102dbafbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x4acu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102dbb12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x4acu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102dbb1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x4acu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102dbb1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x4acu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102dbb32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        wr32(sp0 - 0x4acu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102dbb34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_49c;
        uint32_t loc_4a0;
        uint32_t loc_4a4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_4a4 = rd32(sp0 - 0x4a4u);
        loc_4a0 = rd32(sp0 - 0x4a0u);
        loc_49c = rd32(sp0 - 0x49cu);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4a4u;
        g->ebp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102db85a(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102db85a(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
