/* f_0x10238330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10238330(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    if (rd32(COW_IMG(0x10668fe0u)) == 1u)
    {
        wr32(sp0 - 0x18u, in_edi);
        if (rd32(COW_IMG(0x10668fdcu)) != 1u)
        {
            ecx = rd32(COW_IMG(0x10668fdcu));
            eax = 0u;
L_102383f8: ;
            t7 = rd8(COW_IMG(0x10668ee8u) + eax);
            wr8(eax + sp0 - 0x14u, (uint8_t)t7);
            if ((uint8_t)t7 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t7;
                goto L_102383f8;
            }
            ecx = (ecx & 0xffffff00u) | t7;
        }
        else
        {
            ecx = rd32(COW_IMG(0x10668fdcu));
            edi = COW_IMG(0x10668ee8u);
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t1 = ~ecx - 1u;
            edi = COW_IMG(0x10668f00u);
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0xffu);
            af = 0u;
            zf = 0u;
            sf = 1u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            if (t1 + ~ecx - 1u > 0xfu)
            {
                edx = t1 + ~ecx - 1u;
                ecx = ~ecx - 1u;
                goto L_102383bd;
            }
            ecx = ~ecx - 1u;
L_1023837a: ;
            t2 = rd8(COW_IMG(0x10668ee8u) + eax);
            wr8(eax + sp0 - 0x14u, (uint8_t)t2);
            if ((uint8_t)t2 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t2;
                goto L_1023837a;
            }
            ecx = (ecx & 0xffffff00u) | t2;
            wr32(sp0 - 0x1cu, in_ebx);
            edi = COW_IMG(0x10668f00u);
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            wr32(sp0 - 0x20u, in_esi);
            t3 = edi - ~ecx;
            edi = sp0 - 0x14u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0xffu);
            af = 0u;
            zf = 0u;
            sf = 1u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            esi = t3;
            edi = edi - 1u;
            ecx = ~ecx >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = ~ecx & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        }
L_10238407: ;
        edi = sp0 - 0x14u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx - 1u < 0x10u)
        {
            ecx = ~ecx - 1u;
            wr32(sp0 - 0x18u, sp0 - 0x14u);
            g->edx = sp0 - 0x14u;
            g->esp = sp0 - 0x14u;
            t8 = cow_call_regs(g, COW_IMG(0x101ba240u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x14u);
            t9 = g->edx;
            if (t8 == 0u)
            {
                eax = t8;
                edx = t9;
                g->esp = sp0 - 0x14u;
                cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
                t10 = g->edx;
                wr32(sp0 - 0x18u, sp0 - 0x14u);
                cow_thiscall(g, COW_IMG(0x101c5f30u), rd32(rd32(COW_IMG(0x10668fc4u)) + 0x30u), 1, sp0 - 0x14u);
                t11 = rd32(rd32(COW_IMG(0x10668fc4u)) + 0x30u);
                wr32(sp0 - 0x18u, t11);
                cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t11);
            }
        }
        wr32(COW_IMG(0x10668fe0u), 0u);
        wr32(COW_IMG(0x10668fdcu), 0u);
    }
    return;
L_102383bd: ;
    t4 = rd8(COW_IMG(0x10668ee8u) + eax);
    wr8(eax + sp0 - 0x14u, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        goto L_102383bd;
    }
    ecx = (ecx & 0xffffff00u) | t4;
    edi = sp0 - 0x14u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t5 = 0x10u - (~ecx - 1u);
    wr32(sp0 - 0x1cu, t5);
    wr32(sp0 - 0x20u, COW_IMG(0x10668f00u));
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    g->ecx = sp0 - 0x14u;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10313560u), t5, g->ecx, edx, 1, 3, sp0 - 0x14u, COW_IMG(0x10668f00u), t5);
    t6 = g->ecx;
    ecx = t6;
    goto L_10238407;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10238330(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
