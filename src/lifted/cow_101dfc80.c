/* f_0x101dfc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101dfc80(Guest* g)
{
    uint32_t eax;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_esi);
    wr32(sp0 - 0x8cu, in_edi);
    if (arg1 != 1u)
    {
        edx = in_edx;
    }
    else
    {
        if (arg5 == 0u)
        {
            edx = in_edx;
        }
        else
        {
            wr32(sp0 - 0x90u, arg5 - 0x200u);
            g->eax = arg5 - 0x200u;
            g->edx = in_edx;
            t1 = rd32(COW_IMG(0x106631e8u));
            g->esp = sp0 - 0x8cu;
            t2 = cow_thiscall(g, COW_IMG(0x101c8020u), t1, 1, arg5 - 0x200u);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(sp0 - 0x90u, 0x80808080u);
            wr32(sp0 - 0x94u, 0u);
            wr32(sp0 - 0x98u, arg5);
            g->esp = sp0 - 0x98u;
            t5 = cow_call_regs(g, COW_IMG(0x1022bda0u), t2, t3, t4, 1, 0);
            t6 = g->edx;
            g->edx = t6;
            g->esp = sp0 - 0x94u;
            t7 = cow_thiscall(g, COW_IMG(0x1022bf00u), t5, 1, arg5);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(sp0 - 0x98u, t7);
            wr32(sp0 - 0x9cu, arg3);
            wr32(sp0 - 0xa0u, arg2);
            g->edx = t9;
            g->esp = sp0 - 0x74u;
            t10 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, arg2, arg3, t7, 0u, 0x80808080u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u));
            t11 = g->edx;
            if (t2 == 0u)
            {
                edx = t11;
            }
            else
            {
                eax = t10;
                edx = t11;
                esi = t2;
                t12 = rd8(esi + 5u) + 0x52u;
                wr32(sp0 - 0x90u, t12);
                wr32(sp0 - 0x94u, 0xcu);
                g->eax = eax;
                g->ecx = t12;
                g->esp = sp0 - 0x8cu;
                t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, t12);
                t14 = g->ecx;
                wr32(sp0 - 0x90u, t13);
                t15 = rd8(esi + 3u) + 0x3eu;
                wr32(sp0 - 0x94u, t15);
                wr32(sp0 - 0x98u, 0xcu);
                g->ecx = t14;
                g->edx = t15;
                g->esp = sp0 - 0x90u;
                t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, t15);
                t17 = g->ecx;
                t18 = g->edx;
                wr32(sp0 - 0x94u, t16);
                wr32(sp0 - 0x98u, 0x54u);
                wr32(sp0 - 0x9cu, 0xau);
                g->ecx = t17;
                g->edx = t18;
                g->esp = sp0 - 0x94u;
                t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x54u);
                t20 = g->ecx;
                t21 = g->edx;
                wr32(sp0 - 0x98u, t19);
                wr32(sp0 - 0x9cu, sp0 - 0x80u);
                g->esp = sp0 - 0x88u;
                t22 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t19, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu));
                wr32(sp0 - 0xa0u, 0x80808080u);
                wr32(sp0 - 0xa4u, sp0 - 0x80u);
                wr32(sp0 - 0xa8u, arg3);
                wr32(sp0 - 0xacu, arg4 + arg2);
                g->edx = arg4 + arg2;
                g->esp = sp0 - 0x98u;
                cow_call_regs(g, COW_IMG(0x101ca3c0u), t22, g->ecx, g->edx, 1, 5, arg4 + arg2, arg3, sp0 - 0x80u, 0x80808080u, sp0 - 0x80u);
                t23 = g->edx;
                edx = t23;
            }
        }
    }
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dfc80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dfc80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
