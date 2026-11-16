/* f_0x102269a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102269a0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 1u > 7u) goto L_10226a39;
    edx = rd32(self + 0x40u);
    t1 = rd32(COW_IMG(0x10226a50u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x102269beu: goto L_102269be;
    case 0x102269f3u: goto L_102269f3;
    case 0x10226a07u: goto L_10226a07;
    case 0x10226a39u: goto L_10226a39;
    default: rt_fatal(g, COW_IMG(0x102269b7u), "switch");
    }
    return;
L_102269be: ;
    if ((int32_t)edx <= 0) goto L_10226a4c;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x10226950u), self, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_102269ea;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t13 = g->edx;
    t14 = rd32(self + 8u);
    cow_call_regs(g, COW_IMG(0x1015e790u), t14, COW_IMG(0x10621838u), g->edx, 0, 2, t14, 1u);
    return;
L_102269ea: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    return;
L_102269f3: ;
    t9 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1015e790u), (uint32_t)(int16_t)arg1 - 1u, COW_IMG(0x10621838u), g->edx, 0, 2, t9, 1u);
    return;
L_10226a07: ;
    if ((int32_t)edx <= 0) goto L_10226a4c;
    g->edx = rd32(COW_IMG(0x105781f8u));
    t2 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x102211b0u), t2 + 0x20u, 1, 2u);
    t3 = g->edx;
    t4 = rd32(rd32(COW_IMG(0x10667144u)) + 8u);
    g->eax = rd32(COW_IMG(0x10667144u));
    t5 = rd32(COW_IMG(0x10667144u));
    t6 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t3, 2, t4, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037e90u), t7, 0);
    return;
L_10226a39: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    t15 = rd32(self + 0x30u);
    wr32(self + 0x68u, t15);
L_10226a4c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102269a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102269a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
