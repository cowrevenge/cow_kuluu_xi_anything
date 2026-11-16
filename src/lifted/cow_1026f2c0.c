/* f_0x1026f2c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1026f2c0(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(COW_IMG(0x1099aed8u)) <= 0)
    {
        eax = rd32(COW_IMG(0x1099aed8u));
        edx = in_edx;
    }
    else
    {
        ecx = self;
        edx = in_edx;
        ebx = 0u;
        edi = 0u;
L_1026f2d4: ;
        if ((rd8(ebx + rd32(COW_IMG(0x1099aedcu))) & 0x20u) != 0u)
        {
            eax = (rd32(COW_IMG(0x1099aedcu)) & 0xffffff00u) | rd8(ebx + rd32(COW_IMG(0x1099aedcu)));
            esi = ebx + rd32(COW_IMG(0x1099aedcu));
            d1 = fr(g, (double)rdf32(esi + 0xacu) + (double)rdf32(COW_IMG(0x1033cd84u)));
            wrf32(esi + 0xacu, (float)d1);
            d2 = (double)rdf32(esi + 0xa8u);
            if ((cow_fsw(g, d1, d2, 0u) & 0x4100u) == 0u)
            {
                t3 = rd32(esi + 0xa4u);
                wr32(esi + 0xacu, t3);
                ecx = t3;
            }
            t4 = rd32(esi + 0x98u) + 2u;
            wr32(esi + 0x98u, t4);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t5 = cow_call_regs(g, COW_IMG(0x1027df90u), t4, g->ecx, g->edx, 1, 1, esi);
            t6 = g->edx;
            if ((int32_t)rd32(esi + 0x98u) < (int32_t)(t5 * 2u))
            {
                ecx = rd32(esi + 0x98u);
                edx = t6;
            }
            else
            {
                ecx = rd32(esi + 0x98u);
                edx = t6;
                wr32(esi + 0x98u, 0u);
            }
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x1026f490u), 1, edi);
            t7 = g->ecx;
            t8 = g->edx;
            ecx = t7;
            edx = t8;
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd32(COW_IMG(0x1099aed8u)))
        {
            ebx = ebx + 0xc0u;
            edi = edi + 1u;
            goto L_1026f2d4;
        }
        eax = rd32(COW_IMG(0x1099aed8u));
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026f2c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026f2c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
