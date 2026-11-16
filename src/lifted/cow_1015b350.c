/* f_0x1015b350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015b350(Guest* g)
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
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = arg1;
        edx = in_edx;
    }
    else
    {
        eax = arg1;
        ecx = self;
        edx = in_edx;
        esi = arg1 + 4u;
        edi = 0x20u;
L_1015b362: ;
        t1 = (eax & 0xffff0000u) | rd16(esi - 4u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t2 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        t5 = rd16(esi - 2u);
        wr16(esi - 4u, (uint16_t)t2);
        t6 = (t3 & 0xffff0000u) | t5;
        g->ecx = t6;
        g->edx = t4;
        g->esp = sp0 - 0xcu;
        t7 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        t10 = rd16(esi);
        wr16(esi - 2u, (uint16_t)t7);
        t11 = (t9 & 0xffff0000u) | t10;
        g->ecx = t8;
        g->edx = t11;
        g->esp = sp0 - 0x10u;
        t12 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t11);
        t13 = g->ecx;
        t14 = g->edx;
        wr16(esi, (uint16_t)t12);
        t15 = rd32(esi + 4u);
        g->edx = t14;
        g->esp = sp0 - 0x14u;
        t16 = cow_cdecl(g, COW_IMG(0x1000d120u), 1, t15);
        t17 = g->edx;
        t18 = rd32(esi + 8u);
        wr32(esi + 4u, t16);
        g->ecx = t18;
        g->esp = sp0 - 0x18u;
        t19 = cow_cdecl(g, COW_IMG(0x1000d120u), 1, t18);
        t20 = g->ecx;
        t21 = rd32(esi + 0xcu);
        wr32(esi + 8u, t19);
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x1cu;
        t22 = cow_cdecl(g, COW_IMG(0x1000d120u), 1, t21);
        t23 = g->ecx;
        t24 = g->edx;
        wr32(esi + 0xcu, t22);
        if (edi != 1u)
        {
            eax = t22;
            ecx = t23;
            edx = t24;
            esi = esi + 0x14u;
            edi = edi - 1u;
            goto L_1015b362;
        }
        eax = t22;
        edx = t24;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015b350(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
