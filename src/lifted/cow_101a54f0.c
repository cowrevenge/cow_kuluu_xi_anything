/* f_0x101a54f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101a54f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x10337460u));
    wr32(self + 0x14u, arg1);
    wr32(self + 0x18u, arg2);
    wr8(self + 0x1cu, 0u);
    wr32(self + 0x20u, 1u);
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, arg1, arg2, 1, 3, 0x6b4u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        eax = 0u;
    }
    else
    {
        eax = t1;
        edx = t3;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 8u, 8u, self, COW_IMG(0x101a5450u), COW_IMG(0x103d3c84u), 0x14au, 0xfu, 0x114u);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    wr32(self + 0x44u, eax);
    ebp = self + 0x2cu;
    edi = 0x92u;
L_101a556f: ;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x6b4u, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        ecx = t8;
        edx = t9;
        eax = 0u;
    }
    else
    {
        eax = t7;
        edx = t9;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 9u, 0x3cu, self, COW_IMG(0x101a5450u), COW_IMG(0x103d3c84u), 0x145u, 0x29u, edi);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    wr32(ebp, eax);
    if ((int32_t)(edi + 0x1eu) < 236)
    {
        ebp = ebp + 4u;
        edi = edi + 0x1eu;
        goto L_101a556f;
    }
    ebp = self + 0x38u;
    edi = 0x44u;
L_101a55bb: ;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x6b4u, in_edi, in_esi);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        ecx = t14;
        edx = t15;
        eax = 0u;
    }
    else
    {
        eax = t13;
        edx = t15;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t16 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 9u, 0x3cu, self, COW_IMG(0x101a5450u), COW_IMG(0x103d3c84u), 0x145u, 0x29u, edi);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    wr32(ebp, eax);
    if ((int32_t)(edi + 0x1eu) < 158)
    {
        ebp = ebp + 4u;
        edi = edi + 0x1eu;
        goto L_101a55bb;
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a54f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a54f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
