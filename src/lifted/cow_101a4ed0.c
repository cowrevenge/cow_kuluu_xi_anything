/* f_0x101a4ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a4ed0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = rd32(self + 8u);
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        edx = rd32(self + 8u);
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_ebp);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t1 = cow_call_regs(g, COW_IMG(0x101a44b0u), in_eax, rd32(self + 0x24u), g->edx, 1, 0);
        t2 = g->edx;
        wr32(sp0 - 0x20u, 0u);
        t3 = ((t1 & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t1) + 1u;
        wr32(sp0 - 0x24u, t3);
        g->edx = t2;
        cow_call_regs(g, COW_IMG(0x10118db0u), t3, t2, g->edx, 0, 2, t3, 0u);
        t4 = g->edx;
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->edx = t4;
        cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 8u);
        t5 = g->edx;
        g->edx = t5;
        t6 = rd32(self + 8u);
        t7 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x105781ecu)), 0);
        t8 = g->edx;
        t9 = rd32(sp0 - 0xcu);
        t10 = cow_thiscall(g, COW_IMG(0x1012c900u), rd32(COW_IMG(0x10578184u)), 0);
        if ((uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu)) == 0u)
        {
            eax = t10;
            ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu));
            ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
            edi = t6;
            goto L_101a4f66;
        }
        eax = t10;
        ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu));
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        edi = t6;
        if (ecx == 1u) goto L_101a4f72;
        edx = 0u;
L_101a4f78: ;
        wr32(sp0 - 0x20u, 0x2au);
        wr32(sp0 - 0x24u, edx);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t11 = cow_call_regs(g, COW_IMG(0x10119110u), eax, edi, g->edx, 0, 2, edx, 0x2au);
        t12 = g->edx;
        cow_thiscall(g, COW_IMG(0x1011a400u), rd32(self + 8u), 0);
        t13 = rd32(self + 8u);
        wr32(sp0 - 0x20u, t13);
        t14 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t13);
        if ((uint8_t)t14 == 0u)
        {
            eax = t14;
            wr8(rd32(self + 8u) + 0x63u, 0u);
        }
        else
        {
            t15 = rd32(self + 8u);
            wr8(t15 + 0x63u, 1u);
            eax = t15;
        }
        if (rd8(rd32(self + 0x24u) + 0xcu) != 2u)
        {
            edx = rd32(self + 0x24u);
        }
        else
        {
            edx = rd32(self + 0x24u);
            wr32(sp0 - 0x20u, 2u);
            t16 = (uint32_t)(int8_t)ebx + 0xau;
            wr32(sp0 - 0x24u, t16);
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t17 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, t16);
            t18 = g->edx;
            wr32(sp0 - 0x24u, t17);
            g->edx = t18;
            g->esp = sp0 - 0x1cu;
            t19 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t17, 2u);
            t20 = g->edx;
            eax = t19;
            edx = t20;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t21 = cow_thiscall(g, COW_IMG(0x101a4e90u), self, 0);
        t22 = g->edx;
        eax = t21;
        edx = t22;
        ebx = rd32(sp0 - 0x18u);
        ebp = rd32(sp0 - 0x1cu);
    }
    g->ebx = ebx;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_101a4f66: ;
    if (rd8(sp0 - 9u) != 0u) goto L_101a4f72;
    if ((uint8_t)eax == 0u)
    {
        edx = 0u;
        goto L_101a4f78;
    }
L_101a4f72: ;
    edx = 0x82u;
    goto L_101a4f78;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a4ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a4ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
