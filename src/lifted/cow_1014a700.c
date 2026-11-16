/* f_0x1014a700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014a700(Guest* g)
{
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t in_esi = g->esi;

    if (rd32(COW_IMG(0x10578428u)) == 0u)
    {
        loc_4 = self;
    }
    else
    {
        wr16(self + 0x56u, 0u);
        edx = in_edx;
        ebx = 0u;
        loc_4 = 0u;
L_1014a71d: ;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x101612a0u), rd32(COW_IMG(0x10578428u)), 1, ebx);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
        }
        else
        {
            edx = t2;
            edi = t1;
            if (rd8(edi + 2u) == 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(edi + 2u);
            }
            else
            {
                edx = (edx & 0xffffff00u) | rd8(edi + 2u);
                g->edx = (uint8_t)edx;
                t3 = rd16(self + 0x56u);
                t4 = rd32(self + 0x50u);
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, (uint8_t)edx);
                t5 = g->edx;
                t6 = (t5 & 0xffffff00u) | rd8(edi + 2u);
                g->edx = t6;
                t7 = cow_stdcall(g, COW_IMG(0x1014a550u), 1, t6);
                t8 = g->edx;
                t9 = t3 * 0x54u + t4;
                t10 = (-((uint8_t)t7 != 0u) & 0x404040u) - 0x7fbfbfc0u;
                t11 = rd8(edi + 2u);
                cow_fastcall(g, COW_IMG(0x101f4b20u), t9, t8, 4, 1u, 0x35u, t11, t10);
                t12 = g->edx;
                t13 = rd8(edi + 2u);
                wr32(t9 + 0x48u, t13);
                wr16(self + 0x56u, (uint16_t)(rd16(self + 0x56u) + 1u));
                edx = t12;
                ebx = loc_4;
            }
        }
        if ((int32_t)(ebx + 1u) < 32)
        {
            loc_4 = ebx + 1u;
            ebx = ebx + 1u;
            goto L_1014a71d;
        }
        loc_4 = ebx + 1u;
        t14 = (edx & 0xffff0000u) | rd16(self + 0x56u);
        t15 = rd32(self + 0x50u);
        g->esi = self;
        g->eax = t15;
        g->edx = t14;
        g->esp = sp0 - 0x10u;
        t16 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t15, t14, 1u);
        t17 = g->edx;
        t18 = rd8(self + 0x58u);
        cow_call_regs(g, COW_IMG(0x101f7080u), t16, self, g->edx, 0, 2, t18, 0u);
    }
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014a700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
