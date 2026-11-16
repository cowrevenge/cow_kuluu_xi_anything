/* f_0x102f1e1c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
void cow_fn_102f1e1c(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    unsigned of;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        if (arg2 == 0u)
        {
            edx = in_edx;
        }
        else
        {
            wr8(arg2 + 0x1au, (uint8_t)arg8);
            wr32(arg2 + 4u, arg4);
            wr8(arg2 + 0x1bu, (uint8_t)arg9);
            wr32(arg2, arg3);
            wr8(arg2 + 0x18u, (uint8_t)arg5);
            wr8(arg2 + 0x19u, (uint8_t)arg6);
            wr8(arg2 + 0x1cu, (uint8_t)arg7);
            if ((uint8_t)arg6 == 3u) goto L_102f1e6d;
            if ((arg6 & 2u) == 0u) goto L_102f1e6d;
            wr8(arg2 + 0x1du, 3u);
L_102f1e71: ;
            if ((arg6 & 4u) == 0u)
            {
                of = 0u;
            }
            else
            {
                wr8(arg2 + 0x1du, (uint8_t)(rd8(arg2 + 0x1du) + 1u));
                of = (uint8_t)(rd8(arg2 + 0x1du) + 1u) == 0x80u;
            }
            t1 = rd8(arg2 + 0x1du);
            eax = (arg4 & 0xffffff00u) | t1;
            ecx = (self & 0xffffff00u) | (uint8_t)arg5;
            cf = 0u;
            { /* imul cl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ecx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
            wr8(arg2 + 0x1eu, (uint8_t)eax);
            t2 = cow_divu(g, 0x7fffffffu, (uint32_t)((int32_t)((uint8_t)eax + 7u) >> 3u));
            t3 = cow_modu(g, 0x7fffffffu, (uint32_t)((int32_t)((uint8_t)eax + 7u) >> 3u));
            if (arg3 <= t2)
            {
                ecx = (uint8_t)eax;
                edx = t3;
                t5 = (ecx * arg3 + 7u) >> 3u;
                wr32(arg2 + 0xcu, t5);
            }
            else
            {
                ecx = (uint8_t)eax;
                eax = t2;
                edx = t3;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, COW_IMG(0x10348134u));
                t4 = g->edx;
                wr32(arg2 + 0xcu, 0u);
                edx = t4;
            }
        }
    }
    g->edx = edx;
    return;
L_102f1e6d: ;
    wr8(arg2 + 0x1du, 1u);
    goto L_102f1e71;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f1e1c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f1e1c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
