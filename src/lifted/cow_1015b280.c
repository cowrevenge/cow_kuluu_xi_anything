/* f_0x1015b280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015b280(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
        g->esp = sp0 - 0x10u;
        t2 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        t5 = rd16(arg1 + 2u);
        wr16(arg1, (uint16_t)t2);
        t6 = (t3 & 0xffff0000u) | t5;
        g->ecx = t6;
        g->edx = t4;
        g->esp = sp0 - 0x14u;
        t7 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        wr16(arg1 + 2u, (uint16_t)t7);
        ecx = t8;
        edx = t9;
        ebp = 0x1cu;
        edi = arg1 + 6u;
L_1015b2b1: ;
        t10 = (edx & 0xffff0000u) | rd16(edi - 2u);
        g->ecx = ecx;
        g->edx = t10;
        g->esp = sp0 - 0x10u;
        t11 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t10);
        t12 = g->ecx;
        t13 = g->edx;
        wr16(edi - 2u, (uint16_t)t11);
        t14 = (t11 & 0xffff0000u) | rd16(edi);
        g->edx = t13;
        g->esp = sp0 - 0x14u;
        t15 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t14);
        t16 = g->edx;
        wr16(edi, (uint16_t)t15);
        edx = t16;
        ebx = 4u;
        esi = edi + 2u;
L_1015b2d6: ;
        g->ecx = rd32(esi);
        g->edx = edx;
        t17 = rd32(esi);
        g->esp = sp0 - 0x10u;
        t18 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t17);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(esi, t18);
        if (ebx != 1u)
        {
            edx = t20;
            ebx = ebx - 1u;
            esi = esi + 4u;
            goto L_1015b2d6;
        }
        eax = t18;
        ecx = t19;
        edx = t20;
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            edi = edi + 0x14u;
            goto L_1015b2b1;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015b280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
