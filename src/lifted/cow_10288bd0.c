/* f_0x10288bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10288bd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = rd32(COW_IMG(0x109a2788u));
    }
    else
    {
        edx = rd32(COW_IMG(0x109a2788u));
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x10288680u), 1, arg2);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, t3, COW_IMG(0x103b9134u), t1, arg2, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x102886a0u), 3, arg2, in_edi, in_esi);
    t7 = rd32(arg1 + 0x5cu);
    if ((int32_t)rd32(arg1 + 0x5cu) > (int32_t)rd32(arg1 + 0x58u))
    {
        eax = t6;
        edi = t7;
    }
    else
    {
        eax = t6;
        edx = rd32(arg1 + 0x58u);
        edi = edx;
    }
    if ((int32_t)edi > 0)
    {
        edx = 0u;
L_10288c17: ;
        if (rd32(edx * 4u + rd32(arg1 + 0x50u)) == 0xefbeddbau)
        {
            ecx = edx * 4u + rd32(arg1 + 0x50u);
            wr32(ecx, eax);
            eax = eax + 0x40u;
        }
        if ((int32_t)(edx + 1u) < (int32_t)edi)
        {
            edx = edx + 1u;
            goto L_10288c17;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10288bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10288bd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
