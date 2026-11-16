/* f_0x101a03d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101a03d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg67 = rd32(g->esp + 0x10cu);
    const uint32_t arg68 = rd32(g->esp + 0x110u);
    const uint32_t arg72 = rd32(g->esp + 0x120u);
    const uint32_t arg73 = rd32(g->esp + 0x124u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (arg2 == 1u) goto L_101a03e1;
    return 0xffffffffu;
L_101a03e1: ;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, sp0 + 0xcu);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101be470u), sp0 + 0xcu, COW_IMG(0x1066278cu), g->edx, 0, 3, sp0 - 4u, sp0 + 0xcu, 0u);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        edx = t2;
        goto L_101a0401;
    }
    eax = t1;
    edx = t2;
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0xffffffffu;
L_101a0401: ;
    if ((int32_t)arg67 <= 0) goto L_101a0437;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, arg67);
    t3 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t3);
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101be540u), g->eax, g->ecx, t3, 0, 3, t3, arg67, 0u);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        edx = t5;
        goto L_101a0437;
    }
    edx = t5;
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t6);
    g->eax = t6;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, t6);
    t8 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edx = t8;
    return 0xffffffffu;
L_101a0437: ;
    if (rd32(sp0 + 0x114u) != 0x1400000u)
    {
        ecx = rd32(sp0 + 0x114u);
    }
    else
    {
        wr32(sp0 - 0xcu, sp0 + 0xcu);
        g->esp = sp0 - 8u;
        t9 = cow_stdcall(g, COW_IMG(0x101be510u), 1, sp0 + 0xcu);
        if ((int32_t)t9 >= (int32_t)rd32(sp0 + 0x114u))
        {
            ecx = rd32(sp0 + 0x114u);
        }
        else
        {
            eax = t9;
            wr32(sp0 + 0x114u, eax);
            ecx = eax;
        }
    }
    wr32(sp0 - 0xcu, ecx);
    wr32(sp0 - 0x10u, arg68);
    t10 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t10);
    g->edx = arg68;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x101be590u), COW_IMG(0x1066278cu), 3, t10, arg68, ecx);
    t12 = g->edx;
    if ((int32_t)t11 >= 0)
    {
        eax = t11;
        esi = t11;
        goto L_101a049c;
    }
    eax = t11;
    edx = t12;
    t13 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t13);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t14 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, t13);
    t15 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edx = t15;
    return 0xffffffffu;
L_101a049c: ;
    t16 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t16);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, t16, 0, 1, t16);
    t18 = g->edx;
    if ((int32_t)t17 >= 0)
    {
        edx = t18;
        goto L_101a04b5;
    }
    eax = t17;
    edx = t18;
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0xffffffffu;
L_101a04b5: ;
    if (arg72 != 0u)
    {
        wr32(sp0 - 0xcu, arg73);
        wr32(sp0 - 0x10u, esi);
        wr32(sp0 - 0x14u, arg68);
        g->edx = arg68;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, arg72, arg73, 3, arg68, esi, arg73);
        t19 = g->edx;
        edx = t19;
    }
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a03d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a03d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
