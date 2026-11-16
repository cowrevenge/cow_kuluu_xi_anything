/* f_0x1028ee00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1028ee00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)(arg5 + 1u) <= (int32_t)rd32(rd32(sp0 + 4u) + 0x44u))
    {
        edi = rd32(sp0 + 4u);
    }
    else
    {
        edi = rd32(sp0 + 4u);
        t1 = arg5 * 0x2cu + 0x2cu;
        t2 = rd32(edi + 0x48u);
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t1, 4, t2, t1, COW_IMG(0x103ba694u), 0x1d4u);
        wr32(edi + 0x48u, t3);
        if ((int32_t)rd32(edi + 0x44u) < (int32_t)(arg5 + 1u))
        {
            eax = rd32(edi + 0x44u);
            t4 = arg5 + 1u - eax;
            wr32(sp0 + 4u, t4);
            ecx = t4;
            ebx = eax * 0x2cu;
L_1028ee51: ;
            t5 = ebx + rd32(edi + 0x48u);
            g->ecx = ecx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x1028efd0u), 1, t5);
            t6 = g->ecx;
            t7 = rd32(sp0 + 4u) - 1u;
            t8 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t7);
            if (t8 != 1u)
            {
                eax = t7;
                ecx = t6;
                ebx = ebx + 0x2cu;
                goto L_1028ee51;
            }
        }
        wr32(edi + 0x44u, arg5 + 1u);
    }
    t9 = rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 4u);
    wr32(arg5 * 0x2cu + rd32(edi + 0x48u) + 4u, t9 + 1u);
    t10 = rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 4u) * 0x90u;
    t11 = rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u);
    t12 = rd32(edi + 0x48u);
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t10, 4, t11, t10, COW_IMG(0x103ba694u), 0x1dcu);
    wr32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u, t13);
    t14 = rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 4u) << 2u;
    t15 = rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x24u);
    t16 = rd32(edi + 0x48u);
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t14, 9, t15, t14, COW_IMG(0x103ba694u), 0x1ddu, t11, t10, COW_IMG(0x103ba694u), 0x1dcu, in_edi);
    wr32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x24u, t17);
    t18 = rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 4u) - 1u;
    wr32(rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x24u) + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 4u) * 4u - 4u, t18);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 0xcu, 0u);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u), arg2);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 0x10u, 0u);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 4u, arg3);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 8u, 0u);
    t19 = rd32(edi + 0x48u);
    wr8(t9 * 0x90u + rd32(arg5 * 0x2cu + t19 + 0x28u) + 0x1cu, 0xffu);
    wr8(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 0x1du, 0xffu);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 0x18u, arg4);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 0x20u, 0u);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 0x44u, 0u);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 0x14u, 0u);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 0x88u, 0u);
    wr32(t9 * 0x90u + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u) + 0x8cu, 0u);
    eax = t9 * 0x90u + 0x68u;
    ecx = 8u;
    ebx = t9;
L_1028efa1: ;
    wr32(eax + rd32(arg5 * 0x2cu + rd32(edi + 0x48u) + 0x28u), 0xffffffffu);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_1028efa1;
    }
    return ebx + (arg5 << 0x10u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028ee00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028ee00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
