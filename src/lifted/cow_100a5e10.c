/* f_0x100a5e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100a5e10(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x1cu, in_esi);
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u) goto L_100a5eb8;
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = rd32(rd32(COW_IMG(0x10456a28u)));
    if (arg1 == 0u) goto L_100a5eb8;
    if (rd8(COW_IMG(0x10487f80u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        goto L_100a5e52;
    }
    wr32(sp0 - 0x20u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->edx;
    g->edx = t2;
    g->esp = sp0 - 0x1cu;
    t3 = cow_call_regs(g, COW_IMG(0x10021110u), t1, t1, g->edx, 0, 1, arg1);
    t4 = g->edx;
    cow_thiscall(g, COW_IMG(0x100a5ef0u), arg1, 0);
    return;
L_100a5e52: ;
    g->eax = eax;
    g->edx = rd32(arg1);
    t5 = rd32(arg1);
    g->esp = sp0 - 0x1cu;
    t6 = cow_thiscall(g, rd32(t5 + 0x340u), arg1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        edx = t8;
    }
    else
    {
        edx = t8;
        g->eax = rd32(arg1);
        g->edx = edx;
        t9 = rd32(arg1);
        g->esp = sp0 - 0x1cu;
        t10 = cow_thiscall(g, rd32(t9 + 0x330u), arg1, 0);
        t11 = g->ecx;
        t12 = g->edx;
        if ((uint8_t)t10 == 0u)
        {
            ecx = t11;
            edx = t12;
        }
        else
        {
            eax = t10;
            edx = t12;
            wr32(sp0 - 0x20u, sp0 - 0x18u);
            g->ecx = sp0 - 0x18u;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x1025e0b0u), 1, sp0 - 0x18u);
            t13 = g->ecx;
            t14 = g->edx;
            g->ecx = t13;
            g->esp = sp0 - 0x20u;
            t15 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
            t16 = g->ecx;
            wr32(sp0 - 0x24u, t15 + 0x50u);
            wr32(sp0 - 0x28u, sp0 - 0x18u);
            wr32(sp0 - 0x2cu, sp0 - 0xcu);
            g->edx = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0xcu, sp0 - 0x18u, t15 + 0x50u);
            t17 = g->edx;
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            g->edx = t17;
            t18 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
            t19 = g->edx;
            g->edx = t19;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x1001e760u), t18, 1, sp0 - 0xcu);
            t20 = g->ecx;
            t21 = g->edx;
            ecx = t20;
            edx = t21;
        }
    }
    wr32(sp0 - 0x20u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t22 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t23 = g->edx;
    g->esp = sp0 - 0x1cu;
    t24 = cow_call_regs(g, COW_IMG(0x1001ee60u), t22, t22, t23, 0, 1, arg1);
    t25 = g->edx;
    cow_thiscall(g, COW_IMG(0x100a5ef0u), arg1, 0);
L_100a5eb8: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a5e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a5e10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
