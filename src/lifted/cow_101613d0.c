/* f_0x101613d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101613d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 >= 1u)
    {
        if (rd32(self + 0x18u) != 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            eax = rd32(self + 0x18u);
            g->eax = eax;
            g->esp = sp0;
            t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x68u, in_esi, in_ebx);
            t2 = g->edx;
            if (t1 == 0u)
            {
                edx = t2;
                eax = 0u;
            }
            else
            {
                eax = t1;
                edx = t2;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t3 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
                t4 = g->edx;
                eax = t3;
                edx = t4;
            }
            wr32(self + 0x18u, eax);
            g->eax = eax;
            g->esp = sp0 - 8u;
            t5 = cow_fastcall(g, COW_IMG(0x101c8290u), eax, edx, 1, 0x20u);
            t6 = g->ecx;
            t7 = g->edx;
            t8 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t7, 1, 1, 0x1fu);
            t9 = g->edx;
            g->edx = t9;
            t10 = rd32(self + 0x18u);
            cow_thiscall(g, COW_IMG(0x101c8380u), t10, 1, t8);
            t11 = g->ecx;
            t12 = g->edx;
            ecx = t11;
            edx = t12;
        }
        if (rd32(self + 0x20u) == 0u)
        {
            eax = rd32(self + 0x20u);
        }
        else
        {
            eax = rd32(self + 0x20u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t13 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t14 = g->ecx;
            t15 = g->edx;
            eax = t13;
            ecx = t14;
            edx = t15;
        }
        g->eax = eax;
        g->esp = sp0;
        t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x200u, in_esi, in_ebx);
        t17 = g->edx;
        wr8(self + 0x1cu, (uint8_t)arg1);
        wr32(self + 0x20u, t16);
        t18 = (uint8_t)arg1 + 0x18837u;
        wr32(self + 0x24u, t18);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101c4740u), rd32(COW_IMG(0x10662dccu)), 4, t18, t16, 0x200u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101613d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101613d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
