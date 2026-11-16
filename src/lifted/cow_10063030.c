/* f_0x10063030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10063030(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((arg1 & 2u) == 0u) goto L_10061879;
    t1 = rd32(self - 0x38u);
    if ((int32_t)(t1 - 1u) < 0)
    {
        eax = t1 - 1u;
        ecx = (t1 << 5u) - t1;
        edx = in_edx;
    }
    else
    {
        eax = t1 - 1u;
        esi = self + t1 * 0x7cu - 0x34u;
        edx = in_edx;
        edi = eax + 1u;
L_10061855: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_thiscall(g, COW_IMG(0x10061730u), esi - 0x7cu, 0);
        t3 = g->ecx;
        t4 = g->edx;
        if (edi != 1u)
        {
            eax = t2;
            edx = t4;
            esi = esi - 0x7cu;
            edi = edi - 1u;
            goto L_10061855;
        }
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    if (arg1 & 1u)
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, self - 0x38u);
        t5 = g->edx;
        edx = t5;
    }
    g->edx = edx;
    return self - 0x38u;
L_10061879: ;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10061730u), self - 0x34u, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t8;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self - 0x34u);
        t9 = g->edx;
        edx = t9;
    }
    g->edx = edx;
    return self - 0x34u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10063030(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
