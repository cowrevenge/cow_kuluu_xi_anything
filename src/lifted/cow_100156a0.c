/* f_0x100156a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100156a0(Guest* g)
{
    uint32_t al_m4;
    uint32_t al_m8;
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t2;
    uint32_t t3;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0xcu, in_esi);
    wr32(sp1 - 0x10u, in_edi);
    if ((int32_t)arg1 <= 0)
    {
        eax = arg1;
        goto L_10015737;
    }
    if ((int32_t)arg2 <= 0)
    {
        eax = arg2;
        goto L_10015737;
    }
    wr32(arg3, 0u);
    wr32(arg4, 0u);
    wr32(sp1 - 8u, 0xffffffffu);
    wr32(sp1 - 4u, 0x7fefffffu);
    eax = arg2;
    ecx = 0u;
    edx = 0xffffffffu;
    al_m8 = 0xffffffffu;
    al_m4 = 0x7fefffffu;
    x0 = fr(g, (double)(int32_t)arg1 / (double)(int32_t)arg2);
L_100156ea: ;
    d1 = fr(g, fabs(fr(g, x0 - fr(g, (double)rdf32(COW_IMG(0x1034f4a0u) + ecx * 8u) / (double)rdf32(COW_IMG(0x1034f4a4u) + ecx * 8u)))) / fr(g, (double)rdf32(COW_IMG(0x1034f4a0u) + ecx * 8u) / (double)rdf32(COW_IMG(0x1034f4a4u) + ecx * 8u)));
    if (!(d1 < cow_bits2d(al_m8, al_m4)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, cow_bits2d(al_m8, al_m4), 2u);
        x1 = d1;
    }
    else
    {
        x1 = d1;
        wrf64(sp1 - 8u, x1);
        t2 = rd32(COW_IMG(0x1034f4a0u) + ecx * 8u);
        wr32(arg3, t2);
        t3 = rd32(COW_IMG(0x1034f4a4u) + ecx * 8u);
        wr32(arg4, t3);
        eax = t2;
        edx = ecx;
        al_m4 = rd32(sp1 - 4u);
    }
    if ((int32_t)(ecx + 1u) < 6)
    {
        ecx = ecx + 1u;
        al_m8 = rd32(sp1 - 8u);
        goto L_100156ea;
    }
    return edx;
L_10015737: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100156a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100156a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
