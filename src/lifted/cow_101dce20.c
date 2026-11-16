/* f_0x101dce20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101dce20(Guest* g)
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
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x10338e18u));
    if (rd32(COW_IMG(0x10663484u)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->esp = sp0;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x37cu, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x10663484u), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t6 = cow_thiscall(g, COW_IMG(0x101dd000u), eax, 0);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(COW_IMG(0x10663484u), t6);
            ecx = t7;
            edx = t8;
        }
    }
    if (rd32(COW_IMG(0x10663488u)) == 0u)
    {
        g->esp = sp0;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xe4u, in_edi, in_esi);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            ecx = t10;
            edx = t11;
            wr32(COW_IMG(0x10663488u), 0u);
        }
        else
        {
            eax = t9;
            edx = t11;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t12 = cow_thiscall(g, COW_IMG(0x101ddf90u), eax, 0);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(COW_IMG(0x10663488u), t12);
            ecx = t13;
            edx = t14;
        }
    }
    if (rd32(COW_IMG(0x1066348cu)) != 0u) goto L_101dcecf;
    g->esp = sp0;
    t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    t16 = g->edx;
    if (t15 == 0u) goto L_101dcec9;
    eax = t15;
    edx = t16;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x101de6b0u), eax, 0);
    wr32(COW_IMG(0x1066348cu), t17);
    wr32(COW_IMG(0x10663490u), 0u);
    return self;
L_101dcec9: ;
    wr32(COW_IMG(0x1066348cu), 0u);
L_101dcecf: ;
    wr32(COW_IMG(0x10663490u), 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dce20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dce20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
