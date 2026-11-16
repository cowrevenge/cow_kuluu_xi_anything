/* f_0x1015b300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015b300(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        t1 = (in_eax & 0xffff0000u) | rd16(arg1);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        t5 = rd16(arg1 + 2u);
        wr16(arg1, (uint16_t)t2);
        t6 = (t3 & 0xffff0000u) | t5;
        g->ecx = t6;
        g->edx = t4;
        g->esp = sp0 - 0xcu;
        t7 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        wr16(arg1 + 2u, (uint16_t)t7);
        ecx = t8;
        edx = t9;
        esi = arg1 + 4u;
        edi = 0x7fu;
L_1015b32f: ;
        t10 = (edx & 0xffff0000u) | rd16(esi);
        g->ecx = ecx;
        g->edx = t10;
        g->esp = sp0 - 8u;
        t11 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t10);
        t12 = g->ecx;
        t13 = g->edx;
        wr16(esi, (uint16_t)t11);
        if (edi != 1u)
        {
            ecx = t12;
            edx = t13;
            esi = esi + 4u;
            edi = edi - 1u;
            goto L_1015b32f;
        }
        eax = t11;
        edx = t13;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015b300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
