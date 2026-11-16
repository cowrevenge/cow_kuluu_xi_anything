/* f_0x10210310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10210310(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    g->edi = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101f67c0u), self, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x1033bba0u));
    if (rd32(COW_IMG(0x1066450cu)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x28u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x1066450cu), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            esi = t3;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x1033bb58u));
            wr32(COW_IMG(0x1066450cu), esi);
            ecx = t6;
            edx = t7;
        }
    }
    if (rd32(COW_IMG(0x10664518u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            ecx = t9;
            edx = t10;
            wr32(COW_IMG(0x10664518u), 0u);
        }
        else
        {
            eax = t8;
            ecx = t9;
            edx = t10;
            wr8(eax + 0xdu, 0u);
            wr8(eax + 0xcu, 0u);
            wr32(eax, COW_IMG(0x1033bb28u));
            wr8(eax + 0x12u, 0u);
            wr32(eax + 8u, 0u);
            wr32(COW_IMG(0x10664518u), eax);
        }
    }
    if (rd32(COW_IMG(0x1066451cu)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x18u, in_edi, in_esi);
        t12 = g->ecx;
        t13 = g->edx;
        if (t11 == 0u)
        {
            ecx = t12;
            edx = t13;
            wr32(COW_IMG(0x1066451cu), 0u);
        }
        else
        {
            eax = t11;
            ecx = t12;
            edx = t13;
            wr8(eax + 0xdu, 0u);
            wr8(eax + 0xcu, 0u);
            wr32(eax, COW_IMG(0x1033bafcu));
            wr32(eax + 0x14u, 0u);
            wr32(eax + 8u, 0u);
            wr32(COW_IMG(0x1066451cu), eax);
        }
    }
    if (rd32(COW_IMG(0x10664510u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t14 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x44u, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == 0u)
        {
            ecx = t15;
            edx = t16;
            wr32(COW_IMG(0x10664510u), 0u);
        }
        else
        {
            eax = t14;
            edx = t16;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t17 = cow_thiscall(g, COW_IMG(0x10210da0u), eax, 2, COW_IMG(0x10385ba0u), 1u);
            t18 = g->ecx;
            t19 = g->edx;
            wr32(COW_IMG(0x10664510u), t17);
            ecx = t18;
            edx = t19;
        }
    }
    if (rd32(COW_IMG(0x10664514u)) != 0u) goto L_10210435;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x44u, in_edi, in_esi);
    t21 = g->edx;
    if (t20 == 0u) goto L_1021042f;
    eax = t20;
    edx = t21;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x10210da0u), eax, 2, COW_IMG(0x10385b8cu), 1u);
    wr32(COW_IMG(0x10664514u), t22);
    g->edi = in_edi;
    return self;
L_1021042f: ;
    wr32(COW_IMG(0x10664514u), 0u);
L_10210435: ;
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
