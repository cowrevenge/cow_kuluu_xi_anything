/* f_0x102f35dd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102f35dd(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 8u) + 8u;
    t2 = rd32(sp0 + 8u);
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x102f349fu), g->eax, g->ecx, in_edx, 1, 4, arg1, t1, in_edi, in_esi);
    if ((int32_t)t3 < 0)
    {
        eax = t3;
    }
    else
    {
        esi = t2;
        eax = arg1 + 0xcu;
        ecx = rd32(esi);
        edx = 8u;
        x0 = (double)rdf32(COW_IMG(0x1033976cu));
L_102f3607: ;
        wr32(sp0 + 8u, ecx & 0xfu);
        if ((int32_t)(ecx & 0xfu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 8u);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 8u);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        wrf32(eax, (float)fr(g, x1 * x0));
        if (edx != 1u)
        {
            eax = eax + 0x10u;
            ecx = ecx >> 4u;
            edx = edx - 1u;
            goto L_102f3607;
        }
        eax = arg1 + 0x8cu;
        ecx = 8u;
        esi = rd32(esi + 4u);
L_102f3636: ;
        wr32(sp0 + 8u, esi & 0xfu);
        if ((int32_t)(esi & 0xfu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 8u);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 8u);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        wrf32(eax, (float)fr(g, x1 * x0));
        if (ecx != 1u)
        {
            eax = eax + 0x10u;
            ecx = ecx - 1u;
            esi = esi >> 4u;
            goto L_102f3636;
        }
        eax = 0u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f35dd(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f35dd(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
