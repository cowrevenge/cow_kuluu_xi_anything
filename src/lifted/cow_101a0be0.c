/* f_0x101a0be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a0be0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101b9550u), rd32(self + 0x1cu), in_edx, 1, 0xffffffffu);
    t1 = g->edx;
    if ((int32_t)(rd32(self + 0xcu) + 1u) >= (int32_t)rd32(self + 8u))
    {
        edx = t1;
        goto L_101a0cae;
    }
    t2 = rd32(arg1 + 4u);
    t3 = rd32(self + 0x14u);
    t4 = rd32(self + 4u);
    wr32(t3 * 0x124u + t4 + 4u, t2);
    eax = t3 * 0x124u + t4;
    ecx = arg1 + 8u;
    edx = t3 * 0x49u;
    ebx = t3 * 0x124u + t4 + 8u - (arg1 + 8u);
L_101a0c1f: ;
    t5 = rd8(ecx);
    wr8(ebx + ecx, (uint8_t)t5);
    if ((uint8_t)t5 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t5;
        goto L_101a0c1f;
    }
    t6 = rd32(arg1 + 0x108u);
    wr32(eax + 0x108u, t6);
    t7 = rd32(arg1 + 0x10cu);
    wr32(eax + 0x10cu, t7);
    t8 = rd32(arg1 + 0x110u);
    wr32(eax + 0x110u, t8);
    t9 = rd32(arg1 + 0x114u);
    wr32(eax + 0x114u, t9);
    t10 = rd32(arg1 + 0x118u);
    wr32(eax + 0x118u, t10);
    t11 = rd32(arg1 + 0x11cu);
    wr32(eax + 0x11cu, t11);
    t12 = rd32(arg1 + 0x120u);
    wr32(eax + 0x120u, t12);
    t13 = rd32(self + 0x14u) + 1u;
    t14 = rd32(self + 8u);
    wr32(self + 0x14u, t13);
    if ((int32_t)t13 < (int32_t)t14)
    {
        edx = t13;
    }
    else
    {
        edx = t13;
        wr32(self + 0x14u, 0u);
    }
    t15 = rd32(self + 0xcu) + 1u;
    t16 = rd32(self + 0x1cu);
    wr32(self + 0xcu, t15);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101b9530u), t16, edx, 0);
    t17 = g->edx;
    g->edx = t17;
    return 1u;
L_101a0cae: ;
    g->esp = sp0 - 4u;
    t18 = cow_fastcall(g, COW_IMG(0x101b9530u), rd32(self + 0x1cu), edx, 0);
    t19 = g->edx;
    g->edx = t19;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a0be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a0be0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
