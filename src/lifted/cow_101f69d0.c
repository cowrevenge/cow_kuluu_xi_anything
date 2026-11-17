/* f_0x101f69d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101f69d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(self) + 0x50u), self, 1, arg1);
    t1 = g->edx;
    t2 = rd32(self + 8u);
    wr8(self + 0x46u, (uint8_t)arg1);
    if (t2 == 0u)
    {
        eax = t2;
        edx = t1;
    }
    else
    {
        eax = t2;
        edx = t1;
        g->eax = eax;
        g->edx = edx;
        t3 = rd16(self + 0x20u);
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        t5 = g->edx;
        if ((int32_t)t4 < (int16_t)t3)
        {
            edx = t5;
        }
        else
        {
            eax = t4;
            edx = t5;
            edi = (in_edi & 0xffff0000u) | t3;
            t6 = (edi & 0xffff0000u) | (uint16_t)((uint16_t)edi - rd16(self + 0x1eu));
            g->ebx = arg1;
            g->esp = sp0 - 0xcu;
            t7 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, t6, 0u);
            t8 = rd32(self + 8u);
            wr16(self + 0x24u, rd16(t8 + 0x4cu));
            edx = t8;
        }
        if (rd32(rd32(self + 8u) + 0x88u) == 0u)
        {
            eax = rd32(rd32(self + 8u) + 0x88u);
        }
        else
        {
            eax = rd32(rd32(self + 8u) + 0x88u);
            t9 = (uint32_t)(int16_t)rd16(self + 0x20u);
            wr32(eax + 0x10u, t9);
            t10 = (uint32_t)(int16_t)rd16(self + 0x1eu);
            wr32(eax + 0x14u, t10);
            edx = t9;
        }
    }
    if ((int16_t)rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u) < 0)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
        ecx = rd32(COW_IMG(0x104e1d4cu));
        goto L_101f6a46;
    }
    eax = (eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
    ecx = rd32(COW_IMG(0x104e1d4cu));
    if ((int16_t)eax <= (int16_t)rd16(self + 0x20u)) goto L_101f6a54;
L_101f6a46: ;
    if (rd8(ecx + 0x4du) == 2u)
    {
        if ((uint8_t)arg1 != 0u)
        {
            wr8(ecx + 0x4cu, 0u);
        }
    }
L_101f6a54: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f69d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f69d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
