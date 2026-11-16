/* f_0x1030833e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1030833e(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    if ((int32_t)rd32(in_esi + 0x64u) <= 0)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(in_esi + 0x1a4u);
        ebp = rd32(in_esi + 0x5cu) * 2u + 4u;
        ecx = self;
        edx = in_edx;
        ebx = eax + 0x44u;
        edi = 0u;
L_10308358: ;
        g->eax = rd32(in_esi + 4u);
        g->edx = edx;
        t1 = rd32(in_esi + 4u);
        g->esp = sp0 - 0x18u;
        t2 = cow_thiscall(g, rd32(t1 + 4u), ecx, 0);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(ebx, t2);
        if ((int32_t)(edi + 1u) < (int32_t)rd32(in_esi + 0x64u))
        {
            ecx = t3;
            edx = t4;
            ebx = ebx + 4u;
            edi = edi + 1u;
            goto L_10308358;
        }
        edx = t4;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030833e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030833e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
