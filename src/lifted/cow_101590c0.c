/* f_0x101590c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101590c0(Guest* g)
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

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101598b0u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t4 = g->edx;
    if (rd8(rd32(COW_IMG(0x10578478u)) + 0x65u) != 0u)
    {
        eax = (t3 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578478u)) + 0x65u);
        edx = t4;
        edi = t3;
    }
    else
    {
        eax = (t3 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578478u)) + 0x65u);
        ecx = rd32(COW_IMG(0x10578478u));
        edx = t4;
        esi = t1;
        edi = t3;
        if (arg1 == 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10150a30u), ecx, 1, 0u);
            t14 = g->edx;
            g->edx = t14;
            t15 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578478u)), 0);
            t16 = g->edx;
            if ((uint8_t)t15 != 1u)
            {
                eax = t15;
                edx = t16;
            }
            else
            {
                eax = t15;
                edx = t16;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t17 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035bad8u));
                t18 = g->edx;
                eax = t17;
                edx = t18;
            }
        }
        else
        {
            if (esi == 0u)
            {
                g->eax = rd32(arg1);
                g->edx = edx;
                t6 = rd32(arg1);
                g->esp = sp0 - 0xcu;
                t7 = cow_thiscall(g, rd32(t6 + 0xccu), arg1, 0);
                t8 = g->edx;
                g->edx = t8;
                cow_thiscall(g, COW_IMG(0x10150a30u), rd32(COW_IMG(0x10578478u)), 1, t7);
                t9 = g->edx;
                edx = t9;
            }
            else
            {
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x10150a60u), ecx, 1, esi);
                t5 = g->edx;
                edx = t5;
            }
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t10 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578478u)), 0);
            t11 = g->edx;
            if ((uint8_t)t10 != 0u)
            {
                eax = t10;
                edx = t11;
            }
            else
            {
                edx = t11;
                g->ebx = arg1;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t12 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035bad8u), 1u, 1u);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
        }
    }
    if (edi != 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t19 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x10487f58u), 1, arg1);
        eax = t19;
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101590c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101590c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
