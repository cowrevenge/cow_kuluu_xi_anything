/* f_0x1027c4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027c4e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 0x28u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x28u);
        if ((int32_t)(eax - 1u) < 0)
        {
            eax = eax - 1u;
            ecx = self;
        }
        else
        {
            eax = eax - 1u;
            ecx = self;
            edx = in_edx;
            ebx = eax + 1u;
            ebp = eax * 0x9cu;
            edi = eax * 0xf8u;
L_1027c50c: ;
            t1 = edi + rd32(arg1 + 0x20u);
            g->eax = t1;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t2 = cow_stdcall(g, COW_IMG(0x10291c70u), 0);
            t3 = g->edx;
            t4 = ebp + rd32(arg1 + 0x24u);
            g->ecx = t4;
            g->edx = t3;
            g->esp = sp0 - 0x18u;
            t5 = cow_stdcall(g, COW_IMG(0x10291480u), 0);
            t6 = g->ecx;
            t7 = g->edx;
            if (ebx != 1u)
            {
                ecx = t6;
                edx = t7;
                ebx = ebx - 1u;
                ebp = ebp - 0x9cu;
                edi = edi - 0xf8u;
                goto L_1027c50c;
            }
            eax = t5;
            ecx = t6;
        }
        t8 = rd32(arg1 + 0x20u);
        g->ecx = ecx;
        g->edx = t8;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t8, COW_IMG(0x103b40ecu), 0x266u);
        t9 = g->ecx;
        t10 = g->edx;
        t11 = rd32(arg1 + 0x24u);
        g->ecx = t9;
        g->edx = t10;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t11, COW_IMG(0x103b40ecu), 0x267u);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(arg1 + 0x28u, 0u);
        ecx = t12;
        edx = t13;
    }
    if ((int32_t)arg2 >= 1)
    {
        wr32(arg1 + 0x28u, arg2);
        g->eax = arg2;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t14 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg2, 0xf8u, COW_IMG(0x103b40ecu), 0x270u, in_edi);
        t15 = g->edx;
        t16 = rd32(arg1 + 0x28u);
        wr32(arg1 + 0x20u, t14);
        g->ecx = t16;
        g->esp = sp0 - 0x1cu;
        t17 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t16, 0x9cu, COW_IMG(0x103b40ecu), 0x271u, arg2);
        t18 = g->ecx;
        wr32(arg1 + 0x24u, t17);
        if ((int32_t)rd32(arg1 + 0x28u) > 0)
        {
            eax = rd32(arg1 + 0x28u);
            ecx = t18;
            ebx = 0u;
            ebp = 0u;
            edi = 0u;
L_1027c5b7: ;
            t19 = edi + rd32(arg1 + 0x20u);
            g->ecx = ecx;
            g->edx = t19;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10291bc0u), 3, t19, in_edi, in_esi);
            t20 = g->ecx;
            t21 = g->edx;
            t22 = ebp + rd32(arg1 + 0x24u);
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x102913b0u), 3, t22, t19, in_edi);
            t23 = ebp + rd32(arg1 + 0x24u);
            wr32(edi + rd32(arg1 + 0x20u) + 0x64u, t23);
            wr8(edi + rd32(arg1 + 0x20u) + 0x74u, 0u);
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x28u))
            {
                eax = rd32(arg1 + 0x28u);
                ecx = t23;
                ebx = ebx + 1u;
                ebp = ebp + 0x9cu;
                edi = edi + 0xf8u;
                goto L_1027c5b7;
            }
        }
        t24 = rd32(arg1 + 0x20u);
        wr32(arg1 + 0x2cu, 0u);
        wr32(arg1 + 0x1cu, t24);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c4e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027c4e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
