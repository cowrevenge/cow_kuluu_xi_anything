/* f_0x10046380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10046380(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, COW_IMG(0x1047bbf8u));
    wr32(sp0 - 0x1cu, COW_IMG(0x1047bbdcu));
    wr32(sp0 - 0x20u, COW_IMG(0x1047bbe0u));
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1018ba20u), rd32(COW_IMG(0x1065cb04u)), 5, COW_IMG(0x1047bbe0u), COW_IMG(0x1047bbdcu), COW_IMG(0x1047bbf8u), 0u, 0u);
    t1 = g->edx;
    wr32(sp0 - 0x10u, 0u);
    edi = COW_IMG(0x1047bc28u);
    eax = 0u;
    ecx = 0x11u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, COW_IMG(0x1047bbd8u));
    t2 = rd32(COW_IMG(0x1065cb04u));
    wr32(COW_IMG(0x1047bc34u), 0x3f800000u);
    wr32(COW_IMG(0x1047bc30u), 0x3f800000u);
    wr32(COW_IMG(0x1047bc2cu), 0x3f800000u);
    wr32(COW_IMG(0x1047bc28u), 0x3f800000u);
    wr32(COW_IMG(0x1047bc44u), 0x3f333333u);
    wr32(COW_IMG(0x1047bc40u), 0x3f333333u);
    wr32(COW_IMG(0x1047bc3cu), 0x3f333333u);
    wr32(COW_IMG(0x1047bc38u), 0x3f333333u);
    wr32(COW_IMG(0x1047bc54u), eax);
    wr32(COW_IMG(0x1047bc50u), eax);
    wr32(COW_IMG(0x1047bc4cu), eax);
    wr32(COW_IMG(0x1047bc48u), eax);
    wr32(COW_IMG(0x1047bc68u), 0x42480000u);
    cow_thiscall(g, COW_IMG(0x1018b9e0u), t2, 3, COW_IMG(0x1047bbd8u), eax, 0u);
    t3 = g->ecx;
    wr32(sp0 - 8u, rd32(COW_IMG(0x1047bbd8u)));
    if (rd8(COW_IMG(0x1047bbdau)) < 0x80u)
    {
        eax = (rd32(COW_IMG(0x1047bbd8u)) & 0xffffff00u) | rd8(COW_IMG(0x1047bbdau));
        ecx = (t3 & 0xffffff00u) | 0x80u;
        loc_8 = rd32(COW_IMG(0x1047bbd8u));
        eax = (uint8_t)eax * 2u;
    }
    else
    {
        ecx = (t3 & 0xffffff00u) | 0x80u;
        loc_8 = rd32(COW_IMG(0x1047bbd8u));
        eax = 0xffu;
    }
    wr8(sp0 - 6u, (uint8_t)eax);
    if (rd8(sp0 - 7u) < (uint8_t)ecx)
    {
        eax = (uint8_t)rd32(sp0 - 7u) * 2u;
    }
    else
    {
        eax = 0xffu;
    }
    wr8(sp0 - 7u, (uint8_t)eax);
    if (rd8(sp0 - 8u) < (uint8_t)ecx)
    {
        eax = (uint8_t)rd32(sp0 - 8u) * 2u;
    }
    else
    {
        eax = 0xffu;
    }
    wr8(sp0 - 8u, (uint8_t)eax);
    if (rd8(sp0 - 5u) < (uint8_t)ecx) goto L_100464b2;
    wr8(sp0 - 5u, 0xffu);
    t4 = rd32(sp0 - 8u);
    wr32(COW_IMG(0x1047bbd8u), t4);
    return;
L_100464b2: ;
    wr8(sp0 - 5u, (uint8_t)((uint8_t)rd32(sp0 - 5u) * 2u));
    t5 = rd32(sp0 - 8u);
    wr32(COW_IMG(0x1047bbd8u), t5);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10046380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10046380(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
