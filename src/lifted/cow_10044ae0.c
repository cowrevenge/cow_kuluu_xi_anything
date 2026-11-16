/* f_0x10044ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10044ae0(Guest* g)
{
    double d1;
    double d2;
    double d4;
    double d7;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t20;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xfcu) == 0u)
    {
        eax = rd32(self + 0xfcu);
        edi = 0u;
    }
    else
    {
        eax = rd32(self + 0xfcu);
        edi = rd32(eax);
    }
    d1 = (double)rdf32(self + 0x114u);
    d2 = (double)rdf32(COW_IMG(0x103295d8u));
    wr8(self + 0x178u, 1u);
    if (d1 == d2)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
        goto L_10044bca;
    }
    t3 = rd32(COW_IMG(0x1047bfa8u));
    d4 = fr(g, (double)rdf32(self + 0x110u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    wrf32(self + 0x110u, (float)d4);
    if (!(d4 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        edx = in_edx;
        goto L_10044ba2;
    }
    eax = (t3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    if (edi == 0u) goto L_10044b8c;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x1004e720u), edi, 1, self);
    t6 = g->edx;
    d7 = (double)rdf32(self + 0x110u);
    if (!(d7 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        edx = t6;
        goto L_10044ba2;
    }
    edx = t6;
    t8 = rd32(self + 0x10cu);
    wr8(self + 0x178u, 0u);
    if (!(t8 >> 0x1du & 1u)) goto L_10044bbb;
    t9 = rd32(self + 0x164u);
    wr32(self + 0x110u, 0u);
    if (t9 == 0u) goto L_10044b9b;
    eax = t9;
    if ((rd16(rd32(eax) + 0x18u) & 0x7fffu) > 1u)
    {
        edx = rd32(eax);
        goto L_10044b9b;
    }
    eax = rd16(rd32(eax) + 0x18u) & 0x7fffu;
L_10044b8c: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 1, 1u);
    return (t12 & 0xffffff00u) | 1u;
L_10044b9b: ;
    wr8(self + 0x178u, 1u);
L_10044ba2: ;
    g->eax = rd32(self);
    g->edx = edx;
    t13 = rd32(self);
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, rd32(t13 + 0x40u), self, 0);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_10044beb;
    }
    eax = t14;
    edx = t15;
    zf = !(rd32(edi + 0xd8u) >> 9u & 1u);
L_10044bda: ;
    if (!zf)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t16 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
        t17 = g->edx;
        g->edx = t17;
        t18 = cow_thiscall(g, COW_IMG(0x10053dd0u), edi, 1, t16);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
L_10044beb: ;
    if (edi == 0u) goto L_10044bfd;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t20 = cow_thiscall(g, COW_IMG(0x1004a980u), edi, 1, self);
    return t20 & 0xffffff00u;
L_10044bbb: ;
    g->eax = rd32(self);
    t10 = rd32(self);
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, rd32(t10 + 0x18u), self, 1, 1u);
    return (t11 & 0xffffff00u) | 1u;
L_10044bca: ;
    if (edi == 0u) goto L_10044bfd;
    edx = rd32(edi + 0xd8u) >> 9u;
    zf = !(rd32(edi + 0xd8u) >> 9u & 1u);
    goto L_10044bda;
L_10044bfd: ;
    wr32(self + 0x54u, 0u);
    wr32(self + 0x58u, 0u);
    wr32(self + 0x5cu, 0u);
    wr32(self + 0x188u, 0u);
    wr32(self + 0x18cu, 0u);
    wr32(self + 0x190u, 0u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10044ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
