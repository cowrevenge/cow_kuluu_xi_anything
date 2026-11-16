/* f_0x100057d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100057d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    esi = COW_IMG(0x10455b10u);
    edi = COW_IMG(0x1034a118u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf) goto L_10005864;
    wr32(rd32(COW_IMG(0x10455c20u)) + 0xc9cu, 0u);
    if (rd8(rd32(COW_IMG(0x10455c20u)) + 0xc9au) == 0u)
    {
        ecx = rd32(COW_IMG(0x10455c20u));
        goto L_10005837;
    }
    eax = rd8(rd32(COW_IMG(0x10455c20u)) + 0xc9au);
    ecx = rd32(COW_IMG(0x10455c20u));
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10008ab0u), g->eax, g->ecx, arg1 + 0x14u, 1, 1, arg1 + 0x14u);
    t2 = g->edx;
    if (t1 == 0u) goto L_10005831;
    edx = t2;
    wr8(rd32(COW_IMG(0x10455c20u)) + 0xc99u, 1u);
    g->edx = edx;
    return 1u;
L_10005831: ;
    ecx = rd32(COW_IMG(0x10455c20u));
L_10005837: ;
    t3 = rd32(ecx + 0x84u);
    g->eax = t3;
    g->edx = rd32(rd32(ecx + 0x84u));
    t4 = rd32(rd32(ecx + 0x84u));
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, rd32(t4 + 0xcu), ecx + 0x90u, 4, t3, arg1 + 4u, ecx + 0x90u, 0u);
    t6 = g->edx;
    if ((int32_t)t5 >= 0)
    {
        edx = t6;
        goto L_100058e4;
    }
    edx = t6;
    g->edx = edx;
    return 1u;
L_10005864: ;
    if (rd8(rd32(COW_IMG(0x10455c20u)) + 0xc9au) == 0u)
    {
        edx = rd32(COW_IMG(0x10455c20u));
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        edx = rd32(COW_IMG(0x10455c20u));
        g->eax = arg1 + 0x14u;
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x10008ab0u), g->eax, g->ecx, edx, 1, 1, arg1 + 0x14u);
        if (t7 == 0u)
        {
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            wr32(rd32(COW_IMG(0x10455c20u)) + 0xc9cu, rd32(rd32(COW_IMG(0x10455c20u)) + 0xc9cu) + 1u);
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
        edx = rd32(COW_IMG(0x10455c20u));
    }
    esi = COW_IMG(0x10455b10u);
    edi = arg1 + 4u;
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf) goto L_100058ba;
    g->edx = edx;
    return 1u;
L_100058ba: ;
    if ((uint8_t)ebx != 1u) goto L_100058ce;
    wr8(edx + 0xc99u, (uint8_t)ebx);
    g->edx = edx;
    return 0u;
L_100058ce: ;
    t8 = rd32(edx + 0x84u);
    g->edx = edx + 0x90u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(rd32(edx + 0x84u)) + 0xcu), rd32(rd32(edx + 0x84u)), 4, t8, arg1 + 4u, edx + 0x90u, 0u);
    t9 = g->edx;
    edx = t9;
L_100058e4: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100057d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100057d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
