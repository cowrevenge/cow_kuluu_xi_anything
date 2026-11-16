/* f_0x10130a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10130a80(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    const uint32_t in_ebp = g->ebp;

    if (rd32(COW_IMG(0x10578208u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578208u));
        goto L_10130aa3;
    }
    eax = rd32(COW_IMG(0x10578208u));
    if (rd32(eax + 8u) == 0u) goto L_10130aa3;
    wr8(self + 5u, 0u);
    wr8(self + 6u, 0u);
    return eax;
L_10130aa3: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10160700u), eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10130ae0;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x76u, 4u, 0xffffffffu, in_edi, in_esi, in_ebp);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_10130adc;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x89u, 4u, 0xffffffffu, in_edi, in_esi, in_ebp);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10130ae0;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
L_10130adc: ;
    eax = (eax & 0xffffff00u) | 1u;
L_10130ae2: ;
    if (rd8(self + 6u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 6u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 6u);
        wr8(self + 6u, 1u);
        wr8(self + 5u, (uint8_t)eax);
    }
    t10 = rd8(self + 5u);
    wr8(self + 5u, (uint8_t)eax);
    if ((uint8_t)t10 == (uint8_t)eax) goto L_10130bcf;
    if ((uint8_t)eax == 0u) goto L_10130bcf;
    if (rd32(rd32(COW_IMG(0x105781a8u)) + 0x1cu) != 1u)
    {
        ecx = rd32(COW_IMG(0x10663740u));
        edx = rd32(COW_IMG(0x105781a8u));
        goto L_10130b9a;
    }
    ecx = rd32(COW_IMG(0x10663740u));
    edx = rd32(COW_IMG(0x105781a8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x101f1120u), ecx, 0);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_call_regs(g, COW_IMG(0x1013e730u), t11, g->ecx, g->edx, 1, 1, t11);
    t15 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        edx = t15;
        goto L_10130bcf;
    }
    eax = t14;
    edx = t15;
    edi = t11;
    ebp = 0u;
L_10130b37: ;
    t16 = rd8(self + 7u) & 1u;
    g->eax = t16;
    g->ecx = rd32(COW_IMG(0x105781a8u));
    g->edx = edx;
    t17 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 0xcu;
    t18 = cow_stdcall(g, COW_IMG(0x101317b0u), 2, edi, t16);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd8(self + 7u);
    wr8(self + 7u, (uint8_t)(((t21 + 1u ^ t21) & 3u) ^ t21));
    if ((int32_t)t18 >= 0)
    {
        eax = t18;
        edx = (t20 & 0xffffff00u) | (((t21 + 1u ^ t21) & 3u) ^ t21);
        goto L_10130b72;
    }
    eax = t18;
    edx = (t20 & 0xffffff00u) | (((t21 + 1u ^ t21) & 3u) ^ t21);
    if ((int32_t)(ebp + 1u) < 2)
    {
        ebp = ebp + 1u;
        goto L_10130b37;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_call_regs(g, COW_IMG(0x10130be0u), eax, self, g->edx, 1, 0);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_10130ae0: ;
    eax = eax & 0xffffff00u;
    goto L_10130ae2;
L_10130b72: ;
    g->edi = edi;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10131810u), rd32(COW_IMG(0x105781a8u)), 2, eax, 0u);
    t24 = g->edx;
    g->eax = rd32(rd32(COW_IMG(0x105781a8u)));
    g->edx = t24;
    t25 = rd32(rd32(COW_IMG(0x105781a8u)));
    t26 = cow_thiscall(g, rd32(t25 + 0x4cu), rd32(COW_IMG(0x105781a8u)), 1, 0u);
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x10131770u), rd32(COW_IMG(0x105781a8u)), 0);
    t29 = g->edx;
    eax = t28;
    edx = t29;
L_10130bbc: ;
    t32 = rd32(COW_IMG(0x10663740u));
    wr32(t32 + 0x8cu, eax);
    wr8(t32 + 0x89u, 1u);
L_10130bcf: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10130b9a: ;
    if (rd32(ecx + 0x8cu) != 0u)
    {
        eax = 0u;
    }
    else
    {
        if (rd16(edx + 0x18u) == 0u)
        {
            eax = 0u;
            edx = rd32(edx + 0x14u);
        }
        else
        {
            ecx = (ecx & 0xffff0000u) | rd16(edx + 0x18u);
            edx = rd32(edx + 0x14u);
            g->eax = 0u;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t30 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, edx, ecx);
            t31 = g->edx;
            eax = t30;
            edx = t31;
        }
    }
    goto L_10130bbc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10130a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10130a80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
