/* f_0x101a3840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a3840(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        eax = rd32(self + 8u);
        wr8(eax + 0x38u, rd8(eax + 0x38u) | 0x81u);
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_ebp);
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011a400u), rd32(self + 8u), 0);
        t1 = g->edx;
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->edx = t1;
        cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 8u);
        t2 = g->edx;
        g->edx = t2;
        t3 = rd32(self + 8u);
        t4 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x105781ecu)), 0);
        t5 = g->edx;
        t6 = rd32(sp0 - 0xcu);
        t7 = cow_thiscall(g, COW_IMG(0x1012c900u), rd32(COW_IMG(0x10578184u)), 0);
        if ((uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu)) == 0u)
        {
            eax = t7;
            ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu));
            ebp = t3;
            goto L_101a38ba;
        }
        eax = t7;
        ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu));
        ebp = t3;
        if (ecx == 1u) goto L_101a38c6;
        edx = 0u;
L_101a38cc: ;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, edx);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10119110u), eax, ebp, g->edx, 0, 2, edx, 0u);
        t8 = g->edx;
        t9 = rd32(self + 8u);
        wr32(sp0 - 0x20u, t9);
        g->edx = t8;
        t10 = rd8(t9 + 0x4cu);
        t11 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t9);
        t12 = g->edx;
        if ((uint8_t)t11 == 0u)
        {
            ebx = (t10 & 0xffffff00u) | (uint8_t)(t10 - 1u);
            t13 = rd32(self + 8u);
            wr8(t13 + 0x63u, 0u);
            edx = t13;
        }
        else
        {
            edx = t12;
            ebx = (t10 & 0xffffff00u) | (uint8_t)(t10 - 1u);
            wr8(rd32(self + 8u) + 0x63u, 1u);
        }
        wr32(sp0 - 0x20u, 2u);
        wr32(sp0 - 0x24u, (uint32_t)(int8_t)ebx);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t14 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, (uint32_t)(int8_t)ebx);
        t15 = g->edx;
        wr32(sp0 - 0x24u, t14);
        g->edx = t15;
        g->esp = sp0 - 0x1cu;
        t16 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t14, 2u);
        t17 = g->edx;
        wr32(sp0 - 0x20u, 1u);
        g->edx = t17;
        t18 = cow_call_regs(g, COW_IMG(0x101a3d00u), t16, self, g->edx, 0, 1, 1u);
        t19 = g->edx;
        eax = t18;
        edx = t19;
        ebx = rd32(sp0 - 0x18u);
        ebp = rd32(sp0 - 0x1cu);
    }
    g->ebx = ebx;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_101a38ba: ;
    if (rd8(sp0 - 9u) != 0u) goto L_101a38c6;
    if ((uint8_t)eax == 0u)
    {
        edx = 0u;
        goto L_101a38cc;
    }
L_101a38c6: ;
    edx = 0x82u;
    goto L_101a38cc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a3840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a3840(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
