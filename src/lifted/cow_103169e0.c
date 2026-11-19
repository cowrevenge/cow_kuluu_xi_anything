/* f_0x103169e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_103169e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x103169f8u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_103169f8;
    case 0x10316a00u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a00;
    case 0x10316a08u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a08;
    case 0x10316a13u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a13;
    case 0x10316a1cu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a1c;
    case 0x10316a28u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a28;
    case 0x10316a34u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a34;
    case 0x10316a3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a3c;
    case 0x10316a50u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a50;
    case 0x10316a70u: eax = g->eax; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a70;
    case 0x10316a7cu: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a7c;
    case 0x10316a96u: eax = g->eax; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316a96;
    case 0x10316aa0u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316aa0;
    case 0x10316ab0u: eax = g->eax; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316ab0;
    case 0x10316adcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316adc;
    case 0x10316ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316ae4;
    case 0x10316aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316aec;
    case 0x10316af4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316af4;
    case 0x10316afcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316afc;
    case 0x10316b04u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b04;
    case 0x10316b0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b0c;
    case 0x10316b1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b1f;
    case 0x10316b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b38;
    case 0x10316b40u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b40;
    case 0x10316b4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b4c;
    case 0x10316b60u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b60;
    case 0x10316b78u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b78;
    case 0x10316b88u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b88;
    case 0x10316b93u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316b93;
    case 0x10316ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316ba0;
    case 0x10316bacu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316bac;
    case 0x10316bb8u: eax = g->eax; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316bb8;
    case 0x10316bc4u: eax = g->eax; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316bc4;
    case 0x10316bd8u: eax = g->eax; ecx = g->ecx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316bd8;
    case 0x10316beau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316bea;
    case 0x10316bf8u: eax = g->eax; ecx = g->ecx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316bf8;
    case 0x10316c14u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316c14;
    case 0x10316c20u: eax = g->eax; ecx = g->ecx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316c20;
    case 0x10316c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316c46;
    case 0x10316c74u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316c74;
    case 0x10316c7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316c7c;
    case 0x10316c84u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316c84;
    case 0x10316c8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316c8c;
    case 0x10316c94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316c94;
    case 0x10316c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316c9c;
    case 0x10316ca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316ca4;
    case 0x10316cb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316cb7;
    case 0x10316cd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316cd0;
    case 0x10316cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316cd8;
    case 0x10316ce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316ce8;
    case 0x10316cfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10316cfc;
    default: break;
    }
#endif

    COW_AT(103169e0)
    if (arg1 <= arg2) goto L_10316a00;
    COW_AT(103169f8)
    if (arg1 < arg2 + arg3) goto L_10316b78;
L_10316a00: ;
    COW_AT(10316a00)
    if ((arg1 & 3u) != 0u) goto L_10316a1c;
    COW_AT(10316a08)
    if (arg3 >> 2u < 8u)
    {
        eax = arg2 + arg3;
        ecx = arg3 >> 2u;
        edx = arg3 & 3u;
        esi = arg2;
        edi = arg1;
        goto L_10316a3c;
    }
    COW_AT(10316a13)
    esi = arg2;
    edi = arg1;
    ecx = arg3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t26 = rd32(COW_IMG(0x10316b28u) + (arg3 & 3u) * 4u);
    switch (t26 - RD)
    {
    case 0x10316b38u: edx = arg3 & 3u; goto L_10316b38;
    case 0x10316b40u: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10316b40;
    case 0x10316b4cu: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10316b4c;
    case 0x10316b60u: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10316b60;
    default: rt_fatal(g, COW_IMG(0x10316a15u), "switch");
    }
    return 0;
L_10316a1c: ;
    COW_AT(10316a1c)
    if (arg3 < 4u) goto L_10316a34;
    COW_AT(10316a28)
    t27 = rd32(COW_IMG(0x10316a40u) + (arg1 & 3u) * 4u);
    switch (t27 - RD)
    {
    case 0x10316a50u: goto L_10316a50;
    case 0x10316a7cu: goto L_10316a7c;
    case 0x10316aa0u: goto L_10316aa0;
    default: rt_fatal(g, COW_IMG(0x10316a2du), "switch");
    }
    return 0;
L_10316a34: ;
    COW_AT(10316a34)
    t46 = rd32(COW_IMG(0x10316b38u) + arg3 * 4u - 0x10u);
    switch (t46 - RD)
    {
    case 0x10316b38u: edx = 3u; goto L_10316b38;
    case 0x10316b40u: eax = arg1; edx = 3u; esi = arg2; edi = arg1; goto L_10316b40;
    case 0x10316b4cu: eax = arg1; edx = 3u; esi = arg2; edi = arg1; goto L_10316b4c;
    case 0x10316b60u: eax = arg1; edx = 3u; esi = arg2; edi = arg1; goto L_10316b60;
    default: rt_fatal(g, COW_IMG(0x10316a34u), "switch");
    }
    return 0;
L_10316a3c: ;
    COW_AT(10316a3c)
    t37 = rd32(COW_IMG(0x10316abcu) + ecx * 4u);
    switch (t37 - RD)
    {
    case 0x10316adcu: goto L_10316adc;
    case 0x10316ae4u: goto L_10316ae4;
    case 0x10316aecu: goto L_10316aec;
    case 0x10316af4u: goto L_10316af4;
    case 0x10316afcu: goto L_10316afc;
    case 0x10316b04u: goto L_10316b04;
    case 0x10316b0cu: goto L_10316b0c;
    case 0x10316b1fu: goto L_10316b1f;
    default: rt_fatal(g, COW_IMG(0x10316a3cu), "switch");
    }
    return 0;
L_10316a50: ;
    COW_AT(10316a50)
    t33 = rd8(arg2);
    wr8(arg1, (uint8_t)t33);
    t34 = rd8(arg2 + 1u);
    wr8(arg1 + 1u, (uint8_t)t34);
    t35 = rd8(arg2 + 2u);
    wr8(arg1 + 2u, (uint8_t)t35);
    if ((arg3 + (arg1 & 3u) - 4u) >> 2u < 8u)
    {
        eax = ((t33 | t34) & 0xffffff00u) | t35;
        ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
        edx = arg3 + (arg1 & 3u) - 4u & 3u;
        esi = arg2 + 3u;
        edi = arg1 + 3u;
        goto L_10316a3c;
    }
    eax = ((t33 | t34) & 0xffffff00u) | t35;
    COW_AT(10316a70)
    esi = arg2 + 3u;
    edi = arg1 + 3u;
    ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t36 = rd32(COW_IMG(0x10316b28u) + (arg3 + (arg1 & 3u) - 4u & 3u) * 4u);
    edx = arg3 + (arg1 & 3u) - 4u & 3u;
    switch (t36 - RD)
    {
    case 0x10316b38u: goto L_10316b38;
    case 0x10316b40u: goto L_10316b40;
    case 0x10316b4cu: goto L_10316b4c;
    case 0x10316b60u: goto L_10316b60;
    default: rt_fatal(g, COW_IMG(0x10316a72u), "switch");
    }
    return 0;
L_10316a7c: ;
    COW_AT(10316a7c)
    t30 = rd8(arg2);
    wr8(arg1, (uint8_t)t30);
    t31 = rd8(arg2 + 1u);
    wr8(arg1 + 1u, (uint8_t)t31);
    if ((arg3 + (arg1 & 3u) - 4u) >> 2u < 8u)
    {
        eax = (t30 & 0xffffff00u) | t31;
        ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
        edx = arg3 + (arg1 & 3u) - 4u & 3u;
        esi = arg2 + 2u;
        edi = arg1 + 2u;
        goto L_10316a3c;
    }
    eax = (t30 & 0xffffff00u) | t31;
    COW_AT(10316a96)
    esi = arg2 + 2u;
    edi = arg1 + 2u;
    ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t32 = rd32(COW_IMG(0x10316b28u) + (arg3 + (arg1 & 3u) - 4u & 3u) * 4u);
    edx = arg3 + (arg1 & 3u) - 4u & 3u;
    switch (t32 - RD)
    {
    case 0x10316b38u: goto L_10316b38;
    case 0x10316b40u: goto L_10316b40;
    case 0x10316b4cu: goto L_10316b4c;
    case 0x10316b60u: goto L_10316b60;
    default: rt_fatal(g, COW_IMG(0x10316a98u), "switch");
    }
    return 0;
L_10316aa0: ;
    COW_AT(10316aa0)
    t28 = rd8(arg2);
    wr8(arg1, (uint8_t)t28);
    if ((arg3 + (arg1 & 3u) - 4u) >> 2u < 8u)
    {
        eax = t28;
        ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
        edx = arg3 + (arg1 & 3u) - 4u & 3u;
        esi = arg2 + 1u;
        edi = arg1 + 1u;
        goto L_10316a3c;
    }
    eax = t28;
    COW_AT(10316ab0)
    esi = arg2 + 1u;
    edi = arg1 + 1u;
    ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t29 = rd32(COW_IMG(0x10316b28u) + (arg3 + (arg1 & 3u) - 4u & 3u) * 4u);
    edx = arg3 + (arg1 & 3u) - 4u & 3u;
    switch (t29 - RD)
    {
    case 0x10316b38u: goto L_10316b38;
    case 0x10316b40u: goto L_10316b40;
    case 0x10316b4cu: goto L_10316b4c;
    case 0x10316b60u: goto L_10316b60;
    default: rt_fatal(g, COW_IMG(0x10316ab2u), "switch");
    }
    return 0;
L_10316adc: ;
    COW_AT(10316adc)
    t38 = rd32(ecx * 4u + esi - 0x1cu);
    wr32(ecx * 4u + edi - 0x1cu, t38);
L_10316ae4: ;
    COW_AT(10316ae4)
    t39 = rd32(ecx * 4u + esi - 0x18u);
    wr32(ecx * 4u + edi - 0x18u, t39);
L_10316aec: ;
    COW_AT(10316aec)
    t40 = rd32(ecx * 4u + esi - 0x14u);
    wr32(ecx * 4u + edi - 0x14u, t40);
L_10316af4: ;
    COW_AT(10316af4)
    t41 = rd32(ecx * 4u + esi - 0x10u);
    wr32(ecx * 4u + edi - 0x10u, t41);
L_10316afc: ;
    COW_AT(10316afc)
    t42 = rd32(ecx * 4u + esi - 0xcu);
    wr32(ecx * 4u + edi - 0xcu, t42);
L_10316b04: ;
    COW_AT(10316b04)
    t43 = rd32(ecx * 4u + esi - 8u);
    wr32(ecx * 4u + edi - 8u, t43);
L_10316b0c: ;
    COW_AT(10316b0c)
    t44 = rd32(ecx * 4u + esi - 4u);
    wr32(ecx * 4u + edi - 4u, t44);
    eax = ecx * 4u;
    esi = ecx * 4u + esi;
    edi = ecx * 4u + edi;
L_10316b1f: ;
    COW_AT(10316b1f)
    t45 = rd32(COW_IMG(0x10316b28u) + edx * 4u);
    switch (t45 - RD)
    {
    case 0x10316b38u: goto L_10316b38;
    case 0x10316b40u: goto L_10316b40;
    case 0x10316b4cu: goto L_10316b4c;
    case 0x10316b60u: goto L_10316b60;
    default: rt_fatal(g, COW_IMG(0x10316b1fu), "switch");
    }
    return 0;
L_10316b38: ;
    COW_AT(10316b38)
    g->edx = edx;
    return arg1;
L_10316b40: ;
    COW_AT(10316b40)
    wr8(edi, rd8(esi));
    g->edx = edx;
    return arg1;
L_10316b4c: ;
    COW_AT(10316b4c)
    t49 = rd8(esi);
    wr8(edi, (uint8_t)t49);
    wr8(edi + 1u, rd8(esi + 1u));
    g->edx = edx;
    return arg1;
L_10316b60: ;
    COW_AT(10316b60)
    t47 = rd8(esi);
    wr8(edi, (uint8_t)t47);
    t48 = rd8(esi + 1u);
    wr8(edi + 1u, (uint8_t)t48);
    wr8(edi + 2u, rd8(esi + 2u));
    g->edx = edx;
    return arg1;
L_10316b78: ;
    COW_AT(10316b78)
    if ((arg1 + arg3 - 4u & 3u) != 0u) goto L_10316bac;
    COW_AT(10316b88)
    if (arg3 >> 2u < 8u)
    {
        eax = arg2 + arg3;
        ecx = arg3 >> 2u;
        edx = arg3 & 3u;
        esi = arg2 + arg3 - 4u;
        edi = arg1 + arg3 - 4u;
        goto L_10316ba0;
    }
    COW_AT(10316b93)
    g->df = 1;
    esi = arg2 + arg3 - 4u;
    edi = arg1 + arg3 - 4u;
    ecx = arg3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->df = 0;
    t1 = rd32(COW_IMG(0x10316cc0u) + (arg3 & 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x10316cd0u: edx = arg3 & 3u; goto L_10316cd0;
    case 0x10316cd8u: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10316cd8;
    case 0x10316ce8u: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10316ce8;
    case 0x10316cfcu: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10316cfc;
    default: rt_fatal(g, COW_IMG(0x10316b97u), "switch");
    }
    return 0;
L_10316ba0: ;
    COW_AT(10316ba0)
    t13 = rd32(COW_IMG(0x10316c70u) - ecx * 4u);
    switch (t13 - RD)
    {
    case 0x10316c74u: ecx = -ecx; goto L_10316c74;
    case 0x10316c7cu: ecx = -ecx; goto L_10316c7c;
    case 0x10316c84u: ecx = -ecx; goto L_10316c84;
    case 0x10316c8cu: ecx = -ecx; goto L_10316c8c;
    case 0x10316c94u: ecx = -ecx; goto L_10316c94;
    case 0x10316c9cu: ecx = -ecx; goto L_10316c9c;
    case 0x10316ca4u: ecx = -ecx; goto L_10316ca4;
    case 0x10316cb7u: goto L_10316cb7;
    default: rt_fatal(g, COW_IMG(0x10316ba2u), "switch");
    }
    return 0;
L_10316bac: ;
    COW_AT(10316bac)
    t2 = arg1 + arg3 - 4u;
    if (arg3 < 4u)
    {
        eax = t2;
        edi = t2;
        goto L_10316bc4;
    }
    eax = t2;
    edi = t2;
    COW_AT(10316bb8)
    t3 = rd32(COW_IMG(0x10316bc8u) + (eax & 3u) * 4u);
    ecx = arg3 - (eax & 3u);
    eax = eax & 3u;
    switch (t3 - RD)
    {
    case 0x10316bd8u: goto L_10316bd8;
    case 0x10316bf8u: goto L_10316bf8;
    case 0x10316c20u: goto L_10316c20;
    default: rt_fatal(g, COW_IMG(0x10316bbdu), "switch");
    }
    return 0;
L_10316bc4: ;
    COW_AT(10316bc4)
    t22 = rd32(COW_IMG(0x10316cc0u) + arg3 * 4u);
    switch (t22 - RD)
    {
    case 0x10316cd0u: edx = 3u; goto L_10316cd0;
    case 0x10316cd8u: edx = 3u; esi = arg2 + arg3 - 4u; goto L_10316cd8;
    case 0x10316ce8u: edx = 3u; esi = arg2 + arg3 - 4u; goto L_10316ce8;
    case 0x10316cfcu: edx = 3u; esi = arg2 + arg3 - 4u; goto L_10316cfc;
    default: rt_fatal(g, COW_IMG(0x10316bc4u), "switch");
    }
    return 0;
L_10316bd8: ;
    COW_AT(10316bd8)
    t11 = rd8(arg2 + arg3 - 1u);
    wr8(edi + 3u, (uint8_t)t11);
    if (ecx >> 2u < 8u)
    {
        eax = (eax & 0xffffff00u) | t11;
        edx = ecx & 3u;
        ecx = ecx >> 2u;
        esi = arg2 + arg3 - 5u;
        edi = edi - 1u;
        goto L_10316ba0;
    }
    eax = (eax & 0xffffff00u) | t11;
    edx = ecx & 3u;
    ecx = ecx >> 2u;
    edi = edi - 1u;
    COW_AT(10316bea)
    g->df = 1;
    esi = arg2 + arg3 - 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->df = 0;
    t12 = rd32(COW_IMG(0x10316cc0u) + edx * 4u);
    switch (t12 - RD)
    {
    case 0x10316cd0u: goto L_10316cd0;
    case 0x10316cd8u: goto L_10316cd8;
    case 0x10316ce8u: goto L_10316ce8;
    case 0x10316cfcu: goto L_10316cfc;
    default: rt_fatal(g, COW_IMG(0x10316beeu), "switch");
    }
    return 0;
L_10316bf8: ;
    COW_AT(10316bf8)
    t8 = rd8(arg2 + arg3 - 1u);
    wr8(edi + 3u, (uint8_t)t8);
    t9 = rd8(arg2 + arg3 - 2u);
    wr8(edi + 2u, (uint8_t)t9);
    if (ecx >> 2u < 8u)
    {
        eax = ((eax | t8) & 0xffffff00u) | t9;
        edx = ecx & 3u;
        ecx = ecx >> 2u;
        esi = arg2 + arg3 - 6u;
        edi = edi - 2u;
        goto L_10316ba0;
    }
    eax = ((eax | t8) & 0xffffff00u) | t9;
    edx = ecx & 3u;
    ecx = ecx >> 2u;
    edi = edi - 2u;
    COW_AT(10316c14)
    g->df = 1;
    esi = arg2 + arg3 - 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->df = 0;
    t10 = rd32(COW_IMG(0x10316cc0u) + edx * 4u);
    switch (t10 - RD)
    {
    case 0x10316cd0u: goto L_10316cd0;
    case 0x10316cd8u: goto L_10316cd8;
    case 0x10316ce8u: goto L_10316ce8;
    case 0x10316cfcu: goto L_10316cfc;
    default: rt_fatal(g, COW_IMG(0x10316c18u), "switch");
    }
    return 0;
L_10316c20: ;
    COW_AT(10316c20)
    t4 = rd8(arg2 + arg3 - 1u);
    wr8(edi + 3u, (uint8_t)t4);
    t5 = rd8(arg2 + arg3 - 2u);
    wr8(edi + 2u, (uint8_t)t5);
    t6 = rd8(arg2 + arg3 - 3u);
    wr8(edi + 1u, (uint8_t)t6);
    if (ecx >> 2u < 8u)
    {
        eax = ((eax | t4 | t5) & 0xffffff00u) | t6;
        edx = ecx & 3u;
        ecx = ecx >> 2u;
        esi = arg2 + arg3 - 7u;
        edi = edi - 3u;
        goto L_10316ba0;
    }
    eax = ((eax | t4 | t5) & 0xffffff00u) | t6;
    edx = ecx & 3u;
    ecx = ecx >> 2u;
    edi = edi - 3u;
    COW_AT(10316c46)
    g->df = 1;
    esi = arg2 + arg3 - 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->df = 0;
    t7 = rd32(COW_IMG(0x10316cc0u) + edx * 4u);
    switch (t7 - RD)
    {
    case 0x10316cd0u: goto L_10316cd0;
    case 0x10316cd8u: goto L_10316cd8;
    case 0x10316ce8u: goto L_10316ce8;
    case 0x10316cfcu: goto L_10316cfc;
    default: rt_fatal(g, COW_IMG(0x10316c4au), "switch");
    }
    return 0;
L_10316c74: ;
    COW_AT(10316c74)
    t14 = rd32(ecx * 4u + esi + 0x1cu);
    wr32(ecx * 4u + edi + 0x1cu, t14);
L_10316c7c: ;
    COW_AT(10316c7c)
    t15 = rd32(ecx * 4u + esi + 0x18u);
    wr32(ecx * 4u + edi + 0x18u, t15);
L_10316c84: ;
    COW_AT(10316c84)
    t16 = rd32(ecx * 4u + esi + 0x14u);
    wr32(ecx * 4u + edi + 0x14u, t16);
L_10316c8c: ;
    COW_AT(10316c8c)
    t17 = rd32(ecx * 4u + esi + 0x10u);
    wr32(ecx * 4u + edi + 0x10u, t17);
L_10316c94: ;
    COW_AT(10316c94)
    t18 = rd32(ecx * 4u + esi + 0xcu);
    wr32(ecx * 4u + edi + 0xcu, t18);
L_10316c9c: ;
    COW_AT(10316c9c)
    t19 = rd32(ecx * 4u + esi + 8u);
    wr32(ecx * 4u + edi + 8u, t19);
L_10316ca4: ;
    COW_AT(10316ca4)
    t20 = rd32(ecx * 4u + esi + 4u);
    wr32(ecx * 4u + edi + 4u, t20);
    eax = ecx * 4u;
    esi = ecx * 4u + esi;
    edi = ecx * 4u + edi;
L_10316cb7: ;
    COW_AT(10316cb7)
    t21 = rd32(COW_IMG(0x10316cc0u) + edx * 4u);
    switch (t21 - RD)
    {
    case 0x10316cd0u: goto L_10316cd0;
    case 0x10316cd8u: goto L_10316cd8;
    case 0x10316ce8u: goto L_10316ce8;
    case 0x10316cfcu: goto L_10316cfc;
    default: rt_fatal(g, COW_IMG(0x10316cb7u), "switch");
    }
    return 0;
L_10316cd0: ;
    COW_AT(10316cd0)
    g->edx = edx;
    return arg1;
L_10316cd8: ;
    COW_AT(10316cd8)
    wr8(edi + 3u, rd8(esi + 3u));
    g->edx = edx;
    return arg1;
L_10316ce8: ;
    COW_AT(10316ce8)
    t25 = rd8(esi + 3u);
    wr8(edi + 3u, (uint8_t)t25);
    wr8(edi + 2u, rd8(esi + 2u));
    g->edx = edx;
    return arg1;
L_10316cfc: ;
    COW_AT(10316cfc)
    t23 = rd8(esi + 3u);
    wr8(edi + 3u, (uint8_t)t23);
    t24 = rd8(esi + 2u);
    wr8(edi + 2u, (uint8_t)t24);
    wr8(edi + 1u, rd8(esi + 1u));
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103169e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x103169f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg2 + arg3;
        g->ecx = arg3;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316a00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg2 + arg3;
        g->ecx = arg3;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316a08u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg2 + arg3;
        g->ecx = arg3;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316a13u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg2 + arg3;
        g->ecx = arg3 >> 2u;
        g->edx = arg3 & 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316a1cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->ecx = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316a28u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->ecx = arg3 - 4u;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316a34u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->ecx = arg3 - 4u;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316a3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316a50u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 & 3u;
        g->ecx = arg3 + (arg1 & 3u) - 4u;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316a70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0xcu;
        g->ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
        g->edx = arg3 + (arg1 & 3u) - 4u & 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + 3u;
        g->edi = arg1 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x10316a7cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 & 3u;
        g->ecx = arg3 + (arg1 & 3u) - 4u;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316a96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0xcu;
        g->ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
        g->edx = arg3 + (arg1 & 3u) - 4u & 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + 2u;
        g->edi = arg1 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10316aa0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 & 3u;
        g->ecx = arg3 + (arg1 & 3u) - 4u;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316ab0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0xcu;
        g->ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
        g->edx = arg3 + (arg1 & 3u) - 4u & 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + 1u;
        g->edi = arg1 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10316adcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316ae4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316aecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316af4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316afcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316b04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316b0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316b1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316b38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316b40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316b4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316b60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316b78u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg2 + arg3;
        g->ecx = arg3;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10316b88u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg2 + arg3;
        g->ecx = arg3;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 4u;
        g->edi = arg1 + arg3 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316b93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg2 + arg3;
        g->ecx = arg3 >> 2u;
        g->edx = arg3 & 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 4u;
        g->edi = arg1 + arg3 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316ba0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316bacu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->ecx = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 4u;
        g->edi = arg1 + arg3 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316bb8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        eax = g->eax;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ecx = arg3;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316bc4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        eax = g->eax;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ecx = arg3;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316bd8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316beau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x10316bf8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316c14u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 6u;
        (void)sp0;
        return 1;
    }
    case 0x10316c20u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->edx = 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316c46u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2 + arg3 - 7u;
        (void)sp0;
        return 1;
    }
    case 0x10316c74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316c7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316c84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316c8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316c94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316c9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316ca4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316cb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316cd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316cd8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316ce8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10316cfcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103169e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103169e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
