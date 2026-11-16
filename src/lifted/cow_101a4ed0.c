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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = t1;
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        edx = t1;
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_ebp);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t2 = cow_call_regs(g, COW_IMG(0x101a44b0u), in_eax, rd32(self + 0x24u), g->edx, 1, 0);
        t3 = g->edx;
        wr32(sp0 - 0x20u, 0u);
        t4 = ((t2 & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t2) + 1u;
        wr32(sp0 - 0x24u, t4);
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)t2;
        g->edx = t3;
        t5 = cow_call_regs(g, COW_IMG(0x10118db0u), t4, t3, g->edx, 0, 2, t4, 0u);
        t6 = g->edx;
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->edx = t6;
        cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 8u);
        t7 = g->edx;
        t8 = rd32(COW_IMG(0x105781ecu));
        t9 = rd32(self + 8u);
        wr16(sp0 - 6u, (uint16_t)(rd16(sp0 - 6u) + 0x2au));
        wr16(sp0 - 2u, (uint16_t)(rd16(sp0 - 2u) + 0x2au));
        g->eax = 0x2au;
        g->edx = t7;
        t10 = cow_thiscall(g, COW_IMG(0x1011ba40u), t8, 0);
        t11 = g->edx;
        t12 = rd32(COW_IMG(0x10578184u));
        wr8(sp0 - 9u, (uint8_t)t10);
        t13 = cow_thiscall(g, COW_IMG(0x1012c900u), t12, 0);
        if ((uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu)) == 0u)
        {
            eax = t13;
            ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu));
            edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
            ebx = (in_ebx & 0xffffff00u) | (uint8_t)t2;
            ebp = (uint32_t)(int16_t)rd16(sp0 - 6u);
            edi = t9;
            goto L_101a4f66;
        }
        eax = t13;
        ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu));
        edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t2;
        ebp = (uint32_t)(int16_t)rd16(sp0 - 6u);
        edi = t9;
        if (ecx == 1u) goto L_101a4f72;
L_101a4f78: ;
        wr32(sp0 - 0x20u, ebp);
        wr32(sp0 - 0x24u, edx);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t14 = cow_call_regs(g, COW_IMG(0x10119110u), eax, edi, g->edx, 0, 2, edx, ebp);
        t15 = g->edx;
        t16 = cow_thiscall(g, COW_IMG(0x1011a400u), rd32(self + 8u), 0);
        t17 = rd32(self + 8u);
        wr32(sp0 - 0x20u, t17);
        t18 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t17);
        if ((uint8_t)t18 == 0u)
        {
            eax = t18;
            wr8(rd32(self + 8u) + 0x63u, 0u);
        }
        else
        {
            t19 = rd32(self + 8u);
            wr8(t19 + 0x63u, 1u);
            eax = t19;
        }
        if (rd8(rd32(self + 0x24u) + 0xcu) != 2u)
        {
            edx = rd32(self + 0x24u);
        }
        else
        {
            edx = rd32(self + 0x24u);
            wr32(sp0 - 0x20u, 2u);
            t20 = (uint32_t)(int8_t)ebx + 0xau;
            wr32(sp0 - 0x24u, t20);
            g->eax = t20;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t21 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, t20);
            t22 = g->edx;
            wr32(sp0 - 0x24u, t21);
            g->edx = t22;
            g->esp = sp0 - 0x1cu;
            t23 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t21, 2u);
            t24 = g->edx;
            eax = t23;
            edx = t24;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t25 = cow_thiscall(g, COW_IMG(0x101a4e90u), self, 0);
        t26 = g->edx;
        eax = t25;
        edx = t26;
        ebx = rd32(sp0 - 0x18u);
        ebp = rd32(sp0 - 0x1cu);
    }
    g->ebx = ebx;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_101a4f66: ;
    if (rd8(sp0 - 9u) != 0u) goto L_101a4f72;
    if ((uint8_t)eax == 0u) goto L_101a4f78;
L_101a4f72: ;
    edx = edx + 0x82u;
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
