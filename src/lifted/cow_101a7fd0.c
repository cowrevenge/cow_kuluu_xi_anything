/* f_0x101a7fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101a7fd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_101a7fdc;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_101a7fdc: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_stdcall(g, COW_IMG(0x101a7d00u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_101a7ff5;
    }
    edx = t6;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0x22u);
    return (t7 & 0xffffff00u) | 1u;
L_101a7ff5: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x100e5520u), 2, 4u, arg1);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t8;
    }
    else
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t8;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(COW_IMG(0x106627e4u), t11);
        t14 = cow_call_regs(g, COW_IMG(0x10193830u), t11, g->ecx, g->edx, 1, 2, 0xbfu, 1u);
        eax = t14;
    }
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a7fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
