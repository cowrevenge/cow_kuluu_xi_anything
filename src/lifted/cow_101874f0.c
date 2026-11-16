/* f_0x101874f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_101874f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x14u) != 0u) goto L_10187511;
    eax = rd32(self + 0x14u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    return t1 & 0xffffff00u;
L_10187511: ;
    if (rd32(self + 4u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 4u);
        g->ebx = in_ebx & 0xffffff00u;
        g->edx = arg2;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x101874f0u), ecx, 3, arg1, arg2, arg3);
        t2 = g->edx;
        edx = t2;
    }
    if (arg3 != 0u)
    {
        eax = arg3;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        g->eax = arg3;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall(g, COW_IMG(0x101880b0u), self, 0);
        t4 = g->edx;
        if (t3 == arg1)
        {
            eax = t3;
            edx = t4;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            edx = t4;
            if (rd32(self + 0x10u) == 0u)
            {
                eax = rd32(self + 0x10u);
            }
            else
            {
                eax = rd32(self + 0x10u);
                if (rd32(eax + 8u) == 0u) goto L_1018756b;
                esi = rd32(eax + 8u);
L_10187551: ;
                g->ebx = (in_ebx & 0xffffff00u) | 1u;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t5 = cow_thiscall(g, COW_IMG(0x1018abf0u), esi, 0);
                t6 = g->ecx;
                t7 = g->edx;
                g->edx = t7;
                cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
                t8 = g->edx;
                if (rd32(rd32(self + 0x10u) + 8u) != 0u)
                {
                    eax = rd32(self + 0x10u);
                    edx = t8;
                    esi = rd32(rd32(self + 0x10u) + 8u);
                    goto L_10187551;
                }
                eax = rd32(self + 0x10u);
                edx = t8;
            }
L_1018756b: ;
            if (rd32(self + 0x10u) != 0u)
            {
                esi = rd32(self + 0x10u);
                g->ebx = (in_ebx & 0xffffff00u) | 1u;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_thiscall(g, COW_IMG(0x1018abf0u), esi, 0);
                t10 = g->ecx;
                t11 = g->edx;
                g->edx = t11;
                t12 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
            wr32(self + 0x10u, 0u);
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x101880b0u), self, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == arg1)
    {
        eax = t14;
    }
    else
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t17 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x46u);
        t18 = g->edx;
        if (t17 == 0u)
        {
            eax = t17;
            ebx = (ebx & 0xffffff00u) | 1u;
        }
        else
        {
            eax = t17;
            edx = t18;
            ebx = (ebx & 0xffffff00u) | 1u;
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t19 = cow_thiscall(g, COW_IMG(0x1018a7a0u), eax, 3, self, arg1, arg3);
            eax = t19;
        }
    }
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101874f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101874f0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
