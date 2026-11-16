/* f_0x10124440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10124440(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    wr32(self + 0x58u, 0u);
    wr32(self + 0x5cu, 0u);
    wr32(self + 0x60u, 0u);
    wr32(self + 0x64u, 0u);
    wr32(self + 0x68u, 0u);
    wr32(self + 0x70u, 0xc479c000u);
    wr8(self + 0x4du, 0u);
    wr8(self + 0x88u, 1u);
    wr32(self + 0x8cu, 0u);
    wr32(self + 0x90u, 0u);
    wr32(self + 0x94u, 0u);
    wr32(self + 0x98u, 0u);
    wr32(self + 0x9cu, 0u);
    wr16(self + 0xa2u, 0u);
    wr16(self + 0xa4u, 0u);
    wr8(self + 0xa0u, 0u);
    t1 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu)) >> 1u);
    wr32(self + 4u, t1);
    wr32(self + 0xcu, t1);
    t2 = rd16(COW_IMG(0x106218bau));
    t3 = rd16(COW_IMG(0x106218b6u));
    wr8(self + 0x4cu, 0u);
    t4 = (uint32_t)((int32_t)((uint32_t)(int16_t)(t2 - t3) - (uint32_t)((int32_t)(uint32_t)(int16_t)(t2 - t3) >> 0x1fu)) >> 1u);
    wr32(self + 8u, t4);
    wr32(self + 0x10u, t4);
    g->edx = (uint32_t)((int32_t)(uint32_t)(int16_t)(t2 - t3) >> 0x1fu);
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036e6c8u));
    t6 = g->edx;
    wr32(self + 0x40u, t5);
    wr16(self + 0x44u, 0u);
    wr32(self + 0x80u, 0x3f800000u);
    wr16(self + 0x84u, 0u);
    if (rd32(COW_IMG(0x1036e4ecu)) != 0u)
    {
        eax = t5;
        edx = t6;
    }
    else
    {
        ebp = COW_IMG(0x1036e4ecu);
        edi = COW_IMG(0x1036e4ecu);
L_1012450a: ;
        g->edx = edi - 0x24u;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, edi - 0x24u);
        t8 = g->edx;
        wr32(ebp, t7);
        if (rd32(edi + 0x40u) == 0u)
        {
            ebp = edi + 0x40u;
            edi = edi + 0x40u;
            goto L_1012450a;
        }
        eax = t7;
        edx = t8;
    }
    wr8(self + 0x4eu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x101262a0u), self, 0);
    t10 = g->edx;
    wr8(self + 0x86u, 0u);
    wr8(self + 0x87u, 0u);
    wr16(self + 0xa6u, 0u);
    if (rd32(COW_IMG(0x1045666cu)) == 0u)
    {
        edx = t10;
    }
    else
    {
        eax = t9;
        ecx = rd32(COW_IMG(0x1045666cu));
        edx = t10;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10009780u), ecx, 1, 0u);
        t11 = g->edx;
        edx = t11;
    }
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10124700u), self + 4u, self, g->edx, 0, 2, self + 4u, 0u);
    eax = 0u;
    ecx = self + 0x20u;
L_10124563: ;
    wr8(eax + self + 0x34u, 0u);
    wr32(ecx - 4u, 0u);
    wr32(ecx, 0u);
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        ecx = ecx + 8u;
        goto L_10124563;
    }
    wr32(self + 0xa8u, 0u);
    wr8(self + 0xacu, 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10124440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
