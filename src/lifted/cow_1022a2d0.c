/* f_0x1022a2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022a2d0(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10153ff0u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101549e0u), t1, 0);
    t4 = g->edx;
    t5 = cow_fastcall(g, COW_IMG(0x10229740u), self, t4, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10221900u), self, 4, 0u, t3, 0u, 8u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(self + 0x1cu, COW_IMG(0x1022af60u));
    wr32(self + 0x58u, 1u);
    if ((int32_t)t3 <= 0)
    {
        eax = t7;
        edx = t9;
        edi = 0u;
        goto L_1022a33c;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    ebx = 0u;
    ebp = t3;
    edi = 0u;
L_1022a30f: ;
    g->esp = sp0 - 0x14u;
    t10 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, edx, 1, 0);
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x10154550u), t10, 1, ebx);
    t13 = g->ecx;
    t14 = g->edx;
    if (rd8(t12) != 0x2du)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        if ((int32_t)edi >= 0)
        {
            if ((int32_t)edi < (int32_t)rd32(self + 0x44u))
            {
                if (edi * 8u + rd32(self + 0x20u) == 0u)
                {
                    eax = edi * 8u + rd32(self + 0x20u);
                }
                else
                {
                    eax = edi * 8u + rd32(self + 0x20u);
                    wr32(eax, ebx);
                    edi = edi + 1u;
                }
            }
        }
    }
    if ((int32_t)(ebx + 1u) < (int32_t)ebp)
    {
        ebx = ebx + 1u;
        goto L_1022a30f;
    }
L_1022a33c: ;
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t15 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x10221a80u), self, edx, 2, edi, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022a2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022a2d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
