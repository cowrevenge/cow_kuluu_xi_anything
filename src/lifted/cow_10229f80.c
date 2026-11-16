/* f_0x10229f80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10229f80(Guest* g)
{
    uint32_t eax;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x48u, arg4);
    wr32(sp0 - 0x4cu, arg2);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x10233250u), sp0 - 0x2cu, 2, arg2, arg4);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd16(COW_IMG(0x103862ccu) + arg3 * 8u);
    wr32(sp0 - 0x48u, t3);
    wr32(sp0 - 0x4cu, 0xcu);
    g->eax = t3;
    g->edx = t2;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, t3);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
        wr32(sp0 - 0x48u, eax);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x54u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t6 = cow_thiscall(g, COW_IMG(0x10233280u), sp0 - 0x2cu, 4, 0u, 0u, 0u, eax);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    if ((int32_t)arg3 >= 0)
    {
        if ((int32_t)arg3 >= (int32_t)rd32(arg1 + 0x44u))
        {
            eax = arg1;
        }
        else
        {
            if (arg3 * 8u + rd32(arg1 + 0x20u) == 0u)
            {
                eax = arg3 * 8u + rd32(arg1 + 0x20u);
            }
            else
            {
                eax = arg3 * 8u + rd32(arg1 + 0x20u);
                t8 = rd8(COW_IMG(0x103d3c84u));
                wr32(sp0 - 0x17u, 0u);
                t9 = rd32(eax);
                wr32(sp0 - 0x13u, 0u);
                wr32(sp0 - 0xfu, 0u);
                wr8(sp0 - 0x18u, (uint8_t)t8);
                wr32(sp0 - 0xbu, 0u);
                wr32(sp0 - 0x48u, sp0 - 0x34u);
                wr32(sp0 - 7u, 0u);
                wr16(sp0 - 3u, 0u);
                wr16(sp0 - 0x34u, 0u);
                wr16(sp0 - 0x32u, 0u);
                wr16(sp0 - 0x30u, 0u);
                wr16(sp0 - 0x2eu, 0u);
                wr8(sp0 - 1u, 0u);
                g->eax = sp0 - 0x34u;
                g->edx = 0u;
                g->esp = sp0 - 0x44u;
                t10 = cow_thiscall(g, COW_IMG(0x10117020u), arg2, 1, sp0 - 0x34u);
                t11 = g->edx;
                wr32(sp0 - 0x48u, t9);
                wr32(sp0 - 0x4cu, COW_IMG(0x10352ff0u));
                wr32(sp0 - 0x50u, sp0 - 0x18u);
                g->ebx = arg4;
                g->esp = sp0 - 0x3cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x18u, COW_IMG(0x10352ff0u), t9, in_edi, in_esi);
                wr32(sp0 - 0x54u, 0x3f800000u);
                wr32(sp0 - 0x58u, 0x3f800000u);
                wr32(sp0 - 0x5cu, 1u);
                wr32(sp0 - 0x60u, arg4);
                wr32(sp0 - 0x64u, sp0 - 0x18u);
                t12 = rd32(sp0 - 0x32u) + 3u;
                wr32(sp0 - 0x68u, t12);
                t13 = rd32(sp0 - 0x34u) + 0x136u;
                wr32(sp0 - 0x6cu, t13);
                g->eax = t12;
                g->edx = sp0 - 0x18u;
                g->esp = sp0 - 0x50u;
                t14 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t13, 7, t13, t12, sp0 - 0x18u, arg4, 1u, 0x3f800000u, 0x3f800000u);
                t15 = g->edx;
                eax = t14;
                edx = t15;
            }
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t16 = cow_thiscall(g, COW_IMG(0x10233240u), sp0 - 0x2cu, 0);
    t17 = g->edx;
    g->ebx = in_ebx;
    g->edx = t17;
    return t16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10229f80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10229f80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
