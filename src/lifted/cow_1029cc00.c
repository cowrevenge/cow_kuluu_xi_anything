/* f_0x1029cc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_1029cc00(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10292420u), 4, sp0 - 8u, 1u, 1u, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 1u)
    {
        eax = t1;
        edx = t3;
        goto L_1029cc44;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x10u, 0x3bu);
    wr32(sp0 - 0x14u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc7e8u));
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc7e8u), COW_IMG(0x103b379cu));
    return t7 & 0xffffff00u;
L_1029cc44: ;
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 - 7u);
    g->eax = eax;
    g->ecx = sp0 - 7u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x10292420u), 4, sp0 - 7u, 1u, 1u, arg1);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 1u)
    {
        eax = t8;
        ecx = t9;
        goto L_1029cc80;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    wr32(sp0 - 0x10u, 0x3cu);
    wr32(sp0 - 0x14u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc7e8u));
    g->esp = sp0 - 0x14u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc7e8u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 0xcu);
    return t14 & 0xffffff00u;
L_1029cc80: ;
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 - 6u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 6u;
    g->esp = sp0 - 0xcu;
    t15 = cow_cdecl(g, COW_IMG(0x10292420u), 4, sp0 - 6u, 1u, 1u, arg1);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 == 1u)
    {
        ecx = t16;
        edx = t17;
        goto L_1029ccbc;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    wr32(sp0 - 0x10u, 0x3du);
    wr32(sp0 - 0x14u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc7e8u));
    g->esp = sp0 - 0x14u;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc7e8u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 0xcu);
    return t21 & 0xffffff00u;
L_1029ccbc: ;
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 - 5u);
    g->eax = sp0 - 5u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_cdecl(g, COW_IMG(0x10292420u), 4, sp0 - 5u, 1u, 1u, arg1);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 == 1u) goto L_1029ccf8;
    eax = t22;
    ecx = t23;
    edx = t24;
    wr32(sp0 - 0x10u, 0x3eu);
    wr32(sp0 - 0x14u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t25 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc7e8u));
    g->esp = sp0 - 0x14u;
    t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc7e8u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 0xcu);
    return t28 & 0xffffff00u;
L_1029ccf8: ;
    wr32(sp0 - 0x10u, in_edi);
    wr8(sp0 - 4u, 0u);
    esi = sp0 - 8u;
    edi = COW_IMG(0x103b467cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1029cd2d;
    t29 = rd32(sp0 - 0xcu);
    wr32(arg2, 2u);
    g->esi = t29;
    return (arg2 & 0xffffff00u) | (int32_t)rd32(arg2) > 0;
L_1029cd2d: ;
    esi = sp0 - 8u;
    edi = COW_IMG(0x103b4674u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    wr32(arg2, zf);
    g->esi = rd32(sp0 - 0xcu);
    return (arg2 & 0xffffff00u) | (int32_t)zf > 0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029cc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029cc00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
