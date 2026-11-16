/* f_0x100d70a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100d70a0(Guest* g)
{
    uint32_t eax;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100d7090u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        edi = t1;
        goto L_100d70bf;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (self != 0u)
    {
        g->eax = rd32(self);
        g->edx = edx;
        t4 = rd32(self);
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, rd32(t4 + 0x18u), ecx, 1, 1u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100d70bf: ;
    if (rd32(self + 0x3cu) == 0u)
    {
        eax = rd32(self + 0x3cu);
        goto L_100d70fd;
    }
    eax = rd32(self + 0x3cu);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_100d70e9;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100d712c;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = rd32(edi);
    t7 = rd32(edi);
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, rd32(t7 + 0x1e4u), edi, 0);
    t9 = g->edx;
    if ((uint8_t)t8 != 1u)
    {
        eax = t8;
        edx = t9;
        goto L_100d712c;
    }
    edx = t9;
    g->eax = rd32(self);
    g->edx = edx;
    t10 = rd32(self);
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, rd32(t10 + 0x18u), self, 1, 1u);
    t12 = g->edx;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
L_100d70e9: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, rd32(self + 0x38u), ecx, 2, edi, self);
    t13 = g->edx;
    t14 = rd32(self + 0x3cu) + 1u;
    wr32(self + 0x3cu, t14);
    g->edx = t13;
    return t14 & 0xffffff00u;
L_100d70fd: ;
    g->eax = eax;
    g->edx = rd32(edi);
    t15 = rd32(edi);
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, rd32(t15 + 0x304u), edi, 0);
    t17 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        edx = t17;
        goto L_100d711f;
    }
    edx = t17;
    if (rd32(COW_IMG(0x1048a3d8u)) == 0u) goto L_100d711f;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x10084400u), edi, 0);
    t19 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        edx = t19;
        goto L_100d712c;
    }
    edx = t19;
L_100d711f: ;
    wr32(COW_IMG(0x1048a3d8u), self);
    t20 = rd32(self + 0x3cu) + 1u;
    wr32(self + 0x3cu, t20);
    eax = t20;
L_100d712c: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d70a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d70a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
