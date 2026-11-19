/* f_0x10314a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10314a10(Guest* g)
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
    case 0x10314a28u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314a28;
    case 0x10314a30u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314a30;
    case 0x10314a38u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314a38;
    case 0x10314a43u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314a43;
    case 0x10314a4cu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314a4c;
    case 0x10314a58u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314a58;
    case 0x10314a64u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314a64;
    case 0x10314a6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314a6c;
    case 0x10314a80u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314a80;
    case 0x10314aa0u: eax = g->eax; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314aa0;
    case 0x10314aacu: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314aac;
    case 0x10314ac6u: eax = g->eax; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314ac6;
    case 0x10314ad0u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314ad0;
    case 0x10314ae0u: eax = g->eax; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314ae0;
    case 0x10314b0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b0c;
    case 0x10314b14u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b14;
    case 0x10314b1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b1c;
    case 0x10314b24u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b24;
    case 0x10314b2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b2c;
    case 0x10314b34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b34;
    case 0x10314b3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b3c;
    case 0x10314b4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b4f;
    case 0x10314b68u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b68;
    case 0x10314b70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b70;
    case 0x10314b7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b7c;
    case 0x10314b90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314b90;
    case 0x10314ba8u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314ba8;
    case 0x10314bb8u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314bb8;
    case 0x10314bc3u: g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314bc3;
    case 0x10314bd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314bd0;
    case 0x10314bdcu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314bdc;
    case 0x10314be8u: eax = g->eax; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314be8;
    case 0x10314bf4u: eax = g->eax; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314bf4;
    case 0x10314c08u: eax = g->eax; ecx = g->ecx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314c08;
    case 0x10314c1au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314c1a;
    case 0x10314c28u: eax = g->eax; ecx = g->ecx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314c28;
    case 0x10314c44u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314c44;
    case 0x10314c50u: eax = g->eax; ecx = g->ecx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314c50;
    case 0x10314c76u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314c76;
    case 0x10314ca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314ca4;
    case 0x10314cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314cac;
    case 0x10314cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314cb4;
    case 0x10314cbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314cbc;
    case 0x10314cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314cc4;
    case 0x10314cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314ccc;
    case 0x10314cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314cd4;
    case 0x10314ce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314ce7;
    case 0x10314d00u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314d00;
    case 0x10314d08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314d08;
    case 0x10314d18u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314d18;
    case 0x10314d2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10314d2c;
    default: break;
    }
#endif

    COW_AT(10314a10)
    if (arg1 <= arg2) goto L_10314a30;
    COW_AT(10314a28)
    if (arg1 < arg2 + arg3) goto L_10314ba8;
L_10314a30: ;
    COW_AT(10314a30)
    if ((arg1 & 3u) != 0u) goto L_10314a4c;
    COW_AT(10314a38)
    if (arg3 >> 2u < 8u)
    {
        eax = arg2 + arg3;
        ecx = arg3 >> 2u;
        edx = arg3 & 3u;
        esi = arg2;
        edi = arg1;
        goto L_10314a6c;
    }
    COW_AT(10314a43)
    esi = arg2;
    edi = arg1;
    ecx = arg3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t26 = rd32(COW_IMG(0x10314b58u) + (arg3 & 3u) * 4u);
    switch (t26 - RD)
    {
    case 0x10314b68u: edx = arg3 & 3u; goto L_10314b68;
    case 0x10314b70u: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10314b70;
    case 0x10314b7cu: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10314b7c;
    case 0x10314b90u: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10314b90;
    default: rt_fatal(g, COW_IMG(0x10314a45u), "switch");
    }
    return 0;
L_10314a4c: ;
    COW_AT(10314a4c)
    if (arg3 < 4u) goto L_10314a64;
    COW_AT(10314a58)
    t27 = rd32(COW_IMG(0x10314a70u) + (arg1 & 3u) * 4u);
    switch (t27 - RD)
    {
    case 0x10314a80u: goto L_10314a80;
    case 0x10314aacu: goto L_10314aac;
    case 0x10314ad0u: goto L_10314ad0;
    default: rt_fatal(g, COW_IMG(0x10314a5du), "switch");
    }
    return 0;
L_10314a64: ;
    COW_AT(10314a64)
    t46 = rd32(COW_IMG(0x10314b68u) + arg3 * 4u - 0x10u);
    switch (t46 - RD)
    {
    case 0x10314b68u: edx = 3u; goto L_10314b68;
    case 0x10314b70u: eax = arg1; edx = 3u; esi = arg2; edi = arg1; goto L_10314b70;
    case 0x10314b7cu: eax = arg1; edx = 3u; esi = arg2; edi = arg1; goto L_10314b7c;
    case 0x10314b90u: eax = arg1; edx = 3u; esi = arg2; edi = arg1; goto L_10314b90;
    default: rt_fatal(g, COW_IMG(0x10314a64u), "switch");
    }
    return 0;
L_10314a6c: ;
    COW_AT(10314a6c)
    t37 = rd32(COW_IMG(0x10314aecu) + ecx * 4u);
    switch (t37 - RD)
    {
    case 0x10314b0cu: goto L_10314b0c;
    case 0x10314b14u: goto L_10314b14;
    case 0x10314b1cu: goto L_10314b1c;
    case 0x10314b24u: goto L_10314b24;
    case 0x10314b2cu: goto L_10314b2c;
    case 0x10314b34u: goto L_10314b34;
    case 0x10314b3cu: goto L_10314b3c;
    case 0x10314b4fu: goto L_10314b4f;
    default: rt_fatal(g, COW_IMG(0x10314a6cu), "switch");
    }
    return 0;
L_10314a80: ;
    COW_AT(10314a80)
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
        goto L_10314a6c;
    }
    eax = ((t33 | t34) & 0xffffff00u) | t35;
    COW_AT(10314aa0)
    esi = arg2 + 3u;
    edi = arg1 + 3u;
    ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t36 = rd32(COW_IMG(0x10314b58u) + (arg3 + (arg1 & 3u) - 4u & 3u) * 4u);
    edx = arg3 + (arg1 & 3u) - 4u & 3u;
    switch (t36 - RD)
    {
    case 0x10314b68u: goto L_10314b68;
    case 0x10314b70u: goto L_10314b70;
    case 0x10314b7cu: goto L_10314b7c;
    case 0x10314b90u: goto L_10314b90;
    default: rt_fatal(g, COW_IMG(0x10314aa2u), "switch");
    }
    return 0;
L_10314aac: ;
    COW_AT(10314aac)
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
        goto L_10314a6c;
    }
    eax = (t30 & 0xffffff00u) | t31;
    COW_AT(10314ac6)
    esi = arg2 + 2u;
    edi = arg1 + 2u;
    ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t32 = rd32(COW_IMG(0x10314b58u) + (arg3 + (arg1 & 3u) - 4u & 3u) * 4u);
    edx = arg3 + (arg1 & 3u) - 4u & 3u;
    switch (t32 - RD)
    {
    case 0x10314b68u: goto L_10314b68;
    case 0x10314b70u: goto L_10314b70;
    case 0x10314b7cu: goto L_10314b7c;
    case 0x10314b90u: goto L_10314b90;
    default: rt_fatal(g, COW_IMG(0x10314ac8u), "switch");
    }
    return 0;
L_10314ad0: ;
    COW_AT(10314ad0)
    t28 = rd8(arg2);
    wr8(arg1, (uint8_t)t28);
    if ((arg3 + (arg1 & 3u) - 4u) >> 2u < 8u)
    {
        eax = t28;
        ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
        edx = arg3 + (arg1 & 3u) - 4u & 3u;
        esi = arg2 + 1u;
        edi = arg1 + 1u;
        goto L_10314a6c;
    }
    eax = t28;
    COW_AT(10314ae0)
    esi = arg2 + 1u;
    edi = arg1 + 1u;
    ecx = (arg3 + (arg1 & 3u) - 4u) >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t29 = rd32(COW_IMG(0x10314b58u) + (arg3 + (arg1 & 3u) - 4u & 3u) * 4u);
    edx = arg3 + (arg1 & 3u) - 4u & 3u;
    switch (t29 - RD)
    {
    case 0x10314b68u: goto L_10314b68;
    case 0x10314b70u: goto L_10314b70;
    case 0x10314b7cu: goto L_10314b7c;
    case 0x10314b90u: goto L_10314b90;
    default: rt_fatal(g, COW_IMG(0x10314ae2u), "switch");
    }
    return 0;
L_10314b0c: ;
    COW_AT(10314b0c)
    t38 = rd32(ecx * 4u + esi - 0x1cu);
    wr32(ecx * 4u + edi - 0x1cu, t38);
L_10314b14: ;
    COW_AT(10314b14)
    t39 = rd32(ecx * 4u + esi - 0x18u);
    wr32(ecx * 4u + edi - 0x18u, t39);
L_10314b1c: ;
    COW_AT(10314b1c)
    t40 = rd32(ecx * 4u + esi - 0x14u);
    wr32(ecx * 4u + edi - 0x14u, t40);
L_10314b24: ;
    COW_AT(10314b24)
    t41 = rd32(ecx * 4u + esi - 0x10u);
    wr32(ecx * 4u + edi - 0x10u, t41);
L_10314b2c: ;
    COW_AT(10314b2c)
    t42 = rd32(ecx * 4u + esi - 0xcu);
    wr32(ecx * 4u + edi - 0xcu, t42);
L_10314b34: ;
    COW_AT(10314b34)
    t43 = rd32(ecx * 4u + esi - 8u);
    wr32(ecx * 4u + edi - 8u, t43);
L_10314b3c: ;
    COW_AT(10314b3c)
    t44 = rd32(ecx * 4u + esi - 4u);
    wr32(ecx * 4u + edi - 4u, t44);
    eax = ecx * 4u;
    esi = ecx * 4u + esi;
    edi = ecx * 4u + edi;
L_10314b4f: ;
    COW_AT(10314b4f)
    t45 = rd32(COW_IMG(0x10314b58u) + edx * 4u);
    switch (t45 - RD)
    {
    case 0x10314b68u: goto L_10314b68;
    case 0x10314b70u: goto L_10314b70;
    case 0x10314b7cu: goto L_10314b7c;
    case 0x10314b90u: goto L_10314b90;
    default: rt_fatal(g, COW_IMG(0x10314b4fu), "switch");
    }
    return 0;
L_10314b68: ;
    COW_AT(10314b68)
    g->edx = edx;
    return arg1;
L_10314b70: ;
    COW_AT(10314b70)
    wr8(edi, rd8(esi));
    g->edx = edx;
    return arg1;
L_10314b7c: ;
    COW_AT(10314b7c)
    t49 = rd8(esi);
    wr8(edi, (uint8_t)t49);
    wr8(edi + 1u, rd8(esi + 1u));
    g->edx = edx;
    return arg1;
L_10314b90: ;
    COW_AT(10314b90)
    t47 = rd8(esi);
    wr8(edi, (uint8_t)t47);
    t48 = rd8(esi + 1u);
    wr8(edi + 1u, (uint8_t)t48);
    wr8(edi + 2u, rd8(esi + 2u));
    g->edx = edx;
    return arg1;
L_10314ba8: ;
    COW_AT(10314ba8)
    if ((arg1 + arg3 - 4u & 3u) != 0u) goto L_10314bdc;
    COW_AT(10314bb8)
    if (arg3 >> 2u < 8u)
    {
        eax = arg2 + arg3;
        ecx = arg3 >> 2u;
        edx = arg3 & 3u;
        esi = arg2 + arg3 - 4u;
        edi = arg1 + arg3 - 4u;
        goto L_10314bd0;
    }
    COW_AT(10314bc3)
    g->df = 1;
    esi = arg2 + arg3 - 4u;
    edi = arg1 + arg3 - 4u;
    ecx = arg3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->df = 0;
    t1 = rd32(COW_IMG(0x10314cf0u) + (arg3 & 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x10314d00u: edx = arg3 & 3u; goto L_10314d00;
    case 0x10314d08u: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10314d08;
    case 0x10314d18u: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10314d18;
    case 0x10314d2cu: eax = arg2 + arg3; edx = arg3 & 3u; goto L_10314d2c;
    default: rt_fatal(g, COW_IMG(0x10314bc7u), "switch");
    }
    return 0;
L_10314bd0: ;
    COW_AT(10314bd0)
    t13 = rd32(COW_IMG(0x10314ca0u) - ecx * 4u);
    switch (t13 - RD)
    {
    case 0x10314ca4u: ecx = -ecx; goto L_10314ca4;
    case 0x10314cacu: ecx = -ecx; goto L_10314cac;
    case 0x10314cb4u: ecx = -ecx; goto L_10314cb4;
    case 0x10314cbcu: ecx = -ecx; goto L_10314cbc;
    case 0x10314cc4u: ecx = -ecx; goto L_10314cc4;
    case 0x10314cccu: ecx = -ecx; goto L_10314ccc;
    case 0x10314cd4u: ecx = -ecx; goto L_10314cd4;
    case 0x10314ce7u: goto L_10314ce7;
    default: rt_fatal(g, COW_IMG(0x10314bd2u), "switch");
    }
    return 0;
L_10314bdc: ;
    COW_AT(10314bdc)
    t2 = arg1 + arg3 - 4u;
    if (arg3 < 4u)
    {
        eax = t2;
        edi = t2;
        goto L_10314bf4;
    }
    eax = t2;
    edi = t2;
    COW_AT(10314be8)
    t3 = rd32(COW_IMG(0x10314bf8u) + (eax & 3u) * 4u);
    ecx = arg3 - (eax & 3u);
    eax = eax & 3u;
    switch (t3 - RD)
    {
    case 0x10314c08u: goto L_10314c08;
    case 0x10314c28u: goto L_10314c28;
    case 0x10314c50u: goto L_10314c50;
    default: rt_fatal(g, COW_IMG(0x10314bedu), "switch");
    }
    return 0;
L_10314bf4: ;
    COW_AT(10314bf4)
    t22 = rd32(COW_IMG(0x10314cf0u) + arg3 * 4u);
    switch (t22 - RD)
    {
    case 0x10314d00u: edx = 3u; goto L_10314d00;
    case 0x10314d08u: edx = 3u; esi = arg2 + arg3 - 4u; goto L_10314d08;
    case 0x10314d18u: edx = 3u; esi = arg2 + arg3 - 4u; goto L_10314d18;
    case 0x10314d2cu: edx = 3u; esi = arg2 + arg3 - 4u; goto L_10314d2c;
    default: rt_fatal(g, COW_IMG(0x10314bf4u), "switch");
    }
    return 0;
L_10314c08: ;
    COW_AT(10314c08)
    t11 = rd8(arg2 + arg3 - 1u);
    wr8(edi + 3u, (uint8_t)t11);
    if (ecx >> 2u < 8u)
    {
        eax = (eax & 0xffffff00u) | t11;
        edx = ecx & 3u;
        ecx = ecx >> 2u;
        esi = arg2 + arg3 - 5u;
        edi = edi - 1u;
        goto L_10314bd0;
    }
    eax = (eax & 0xffffff00u) | t11;
    edx = ecx & 3u;
    ecx = ecx >> 2u;
    edi = edi - 1u;
    COW_AT(10314c1a)
    g->df = 1;
    esi = arg2 + arg3 - 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->df = 0;
    t12 = rd32(COW_IMG(0x10314cf0u) + edx * 4u);
    switch (t12 - RD)
    {
    case 0x10314d00u: goto L_10314d00;
    case 0x10314d08u: goto L_10314d08;
    case 0x10314d18u: goto L_10314d18;
    case 0x10314d2cu: goto L_10314d2c;
    default: rt_fatal(g, COW_IMG(0x10314c1eu), "switch");
    }
    return 0;
L_10314c28: ;
    COW_AT(10314c28)
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
        goto L_10314bd0;
    }
    eax = ((eax | t8) & 0xffffff00u) | t9;
    edx = ecx & 3u;
    ecx = ecx >> 2u;
    edi = edi - 2u;
    COW_AT(10314c44)
    g->df = 1;
    esi = arg2 + arg3 - 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->df = 0;
    t10 = rd32(COW_IMG(0x10314cf0u) + edx * 4u);
    switch (t10 - RD)
    {
    case 0x10314d00u: goto L_10314d00;
    case 0x10314d08u: goto L_10314d08;
    case 0x10314d18u: goto L_10314d18;
    case 0x10314d2cu: goto L_10314d2c;
    default: rt_fatal(g, COW_IMG(0x10314c48u), "switch");
    }
    return 0;
L_10314c50: ;
    COW_AT(10314c50)
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
        goto L_10314bd0;
    }
    eax = ((eax | t4 | t5) & 0xffffff00u) | t6;
    edx = ecx & 3u;
    ecx = ecx >> 2u;
    edi = edi - 3u;
    COW_AT(10314c76)
    g->df = 1;
    esi = arg2 + arg3 - 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->df = 0;
    t7 = rd32(COW_IMG(0x10314cf0u) + edx * 4u);
    switch (t7 - RD)
    {
    case 0x10314d00u: goto L_10314d00;
    case 0x10314d08u: goto L_10314d08;
    case 0x10314d18u: goto L_10314d18;
    case 0x10314d2cu: goto L_10314d2c;
    default: rt_fatal(g, COW_IMG(0x10314c7au), "switch");
    }
    return 0;
L_10314ca4: ;
    COW_AT(10314ca4)
    t14 = rd32(ecx * 4u + esi + 0x1cu);
    wr32(ecx * 4u + edi + 0x1cu, t14);
L_10314cac: ;
    COW_AT(10314cac)
    t15 = rd32(ecx * 4u + esi + 0x18u);
    wr32(ecx * 4u + edi + 0x18u, t15);
L_10314cb4: ;
    COW_AT(10314cb4)
    t16 = rd32(ecx * 4u + esi + 0x14u);
    wr32(ecx * 4u + edi + 0x14u, t16);
L_10314cbc: ;
    COW_AT(10314cbc)
    t17 = rd32(ecx * 4u + esi + 0x10u);
    wr32(ecx * 4u + edi + 0x10u, t17);
L_10314cc4: ;
    COW_AT(10314cc4)
    t18 = rd32(ecx * 4u + esi + 0xcu);
    wr32(ecx * 4u + edi + 0xcu, t18);
L_10314ccc: ;
    COW_AT(10314ccc)
    t19 = rd32(ecx * 4u + esi + 8u);
    wr32(ecx * 4u + edi + 8u, t19);
L_10314cd4: ;
    COW_AT(10314cd4)
    t20 = rd32(ecx * 4u + esi + 4u);
    wr32(ecx * 4u + edi + 4u, t20);
    eax = ecx * 4u;
    esi = ecx * 4u + esi;
    edi = ecx * 4u + edi;
L_10314ce7: ;
    COW_AT(10314ce7)
    t21 = rd32(COW_IMG(0x10314cf0u) + edx * 4u);
    switch (t21 - RD)
    {
    case 0x10314d00u: goto L_10314d00;
    case 0x10314d08u: goto L_10314d08;
    case 0x10314d18u: goto L_10314d18;
    case 0x10314d2cu: goto L_10314d2c;
    default: rt_fatal(g, COW_IMG(0x10314ce7u), "switch");
    }
    return 0;
L_10314d00: ;
    COW_AT(10314d00)
    g->edx = edx;
    return arg1;
L_10314d08: ;
    COW_AT(10314d08)
    wr8(edi + 3u, rd8(esi + 3u));
    g->edx = edx;
    return arg1;
L_10314d18: ;
    COW_AT(10314d18)
    t25 = rd8(esi + 3u);
    wr8(edi + 3u, (uint8_t)t25);
    wr8(edi + 2u, rd8(esi + 2u));
    g->edx = edx;
    return arg1;
L_10314d2c: ;
    COW_AT(10314d2c)
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
int cow_entry_fix_10314a10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10314a28u:
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
    case 0x10314a30u:
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
    case 0x10314a38u:
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
    case 0x10314a43u:
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
    case 0x10314a4cu:
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
    case 0x10314a58u:
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
    case 0x10314a64u:
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
    case 0x10314a6cu:
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
    case 0x10314a80u:
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
    case 0x10314aa0u:
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
    case 0x10314aacu:
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
    case 0x10314ac6u:
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
    case 0x10314ad0u:
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
    case 0x10314ae0u:
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
    case 0x10314b0cu:
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
    case 0x10314b14u:
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
    case 0x10314b1cu:
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
    case 0x10314b24u:
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
    case 0x10314b2cu:
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
    case 0x10314b34u:
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
    case 0x10314b3cu:
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
    case 0x10314b4fu:
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
    case 0x10314b68u:
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
    case 0x10314b70u:
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
    case 0x10314b7cu:
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
    case 0x10314b90u:
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
    case 0x10314ba8u:
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
    case 0x10314bb8u:
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
    case 0x10314bc3u:
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
    case 0x10314bd0u:
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
    case 0x10314bdcu:
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
    case 0x10314be8u:
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
    case 0x10314bf4u:
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
    case 0x10314c08u:
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
    case 0x10314c1au:
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
    case 0x10314c28u:
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
    case 0x10314c44u:
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
    case 0x10314c50u:
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
    case 0x10314c76u:
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
    case 0x10314ca4u:
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
    case 0x10314cacu:
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
    case 0x10314cb4u:
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
    case 0x10314cbcu:
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
    case 0x10314cc4u:
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
    case 0x10314cccu:
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
    case 0x10314cd4u:
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
    case 0x10314ce7u:
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
    case 0x10314d00u:
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
    case 0x10314d08u:
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
    case 0x10314d18u:
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
    case 0x10314d2cu:
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
void cow_adapter_10314a10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10314a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
