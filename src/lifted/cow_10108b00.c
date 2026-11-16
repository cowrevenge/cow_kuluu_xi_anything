/* f_0x10108b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10108b00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (self + 0x14u == 0u)
    {
        edx = in_edx;
        ebx = 0u;
        edi = 0x14u;
        goto L_10108b32;
    }
    eax = self + 0x14u;
    ecx = self;
    ebx = 0u;
    edi = 0x14u;
L_10108b13: ;
    if (rd32(eax) != 0u)
    {
        edx = rd32(eax);
        edi = edi + ((ecx & 0xffff0000u) | rd16(eax + 6u));
    }
    else
    {
        edx = rd32(eax);
        edi = edi + ((ecx & 0xffff0000u) | rd16(eax + 6u));
        ecx = (ecx & 0xffff0000u) | rd16(eax + 6u);
        if ((uint16_t)ebx < (uint16_t)ecx)
        {
            ebx = ecx;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10108870u), self, 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        goto L_10108b13;
    }
    edx = t3;
L_10108b32: ;
    if ((uint16_t)edi != rd16(self + 0xau))
    {
        g->ebx = ebx;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10108b50u), arg1, self, g->edx, 0, 1, arg1);
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10108b00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
