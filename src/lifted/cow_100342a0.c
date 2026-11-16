/* f_0x100342a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100342a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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

    if (rd32(self + 4u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1003430b;
    }
    eax = rd32(self + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
    t2 = g->edx;
    t3 = rd16(t1 + 0x32u) * 0x40u + 0x40u;
    t4 = rd16(t1 + 0x32u);
    t5 = cow_call_regs(g, COW_IMG(0x10028640u), t1, t3, t2, 1, 2, t3, 2u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(self + 8u, t5);
    if (t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_1003430b;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    edi = t4;
    t8 = (eax + 0xfu & 0xffffff00u) | (eax + 0xfu & 0xf0u);
    wr32(self + 0xcu, t8);
    if ((int32_t)edi <= 0)
    {
        eax = t8;
    }
    else
    {
        eax = t8;
        ebx = 0u;
        ebp = edi;
L_100342e7: ;
        g->eax = eax;
        g->edx = edx;
        t9 = rd32(self + 0xcu);
        g->esp = sp0 - 0x10u;
        t10 = cow_thiscall(g, COW_IMG(0x100279b0u), ebx + t9, 0);
        t11 = g->ecx;
        t12 = g->edx;
        if (ebp != 1u)
        {
            eax = t10;
            edx = t12;
            ebx = ebx + 0x40u;
            ebp = ebp - 1u;
            goto L_100342e7;
        }
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x10028640u), eax, ecx, edx, 1, 2, edi, 2u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(self + 0x14u, t13);
    if (t13 != 0u) goto L_1003432b;
    ecx = t14;
    edx = t15;
L_1003430b: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t16 = cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        esi = rd32(self + 0x14u);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, esi);
    }
L_1003432b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100342a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100342a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
