/* f_0x1010f910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1010f910(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(COW_IMG(0x104e1708u)) == 0u) goto L_1010fa1f;
    ebp = rd32(COW_IMG(0x104e1708u));
    t1 = rd32(ebp + 0x18u);
    wr32(ebp, COW_IMG(0x10332e9cu));
    wr32(t1 + 8u, 0u);
    if (rd8(ebp + 4u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(ebp + 4u);
    }
    else
    {
        if (rd32(ebp + 0x10u) == 0u)
        {
            eax = rd32(ebp + 0x10u);
            goto L_1010f945;
        }
        eax = rd32(ebp + 0x10u);
L_1010f93c: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_1010f93c;
        }
        eax = rd32(eax + 8u);
    }
L_1010f945: ;
    if (rd32(ebp + 0x10u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        esi = rd32(ebp + 0x10u);
        edx = in_edx;
L_1010f94f: ;
        t2 = rd32(esi + 8u);
        wr32(esi + 8u, 0u);
        if (rd32(esi) == 0u)
        {
            ebx = t2;
            edi = rd32(esi);
        }
        else
        {
            ebx = t2;
            edi = rd32(esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_stdcall(g, COW_IMG(0x1010fed0u), 0);
            t4 = g->edx;
            g->ecx = edi;
            g->edx = t4;
            t5 = cow_stdcall(g, COW_IMG(0x1010fed0u), 0);
            t6 = g->ecx;
            t7 = g->edx;
            g->edx = t7;
            t8 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
        t10 = rd32(esi + 8u);
        wr32(esi, 0xefefefefu);
        if (t10 == 0u)
        {
            ecx = t10;
        }
        else
        {
            ecx = t10;
            g->ebx = ebx;
            g->edi = edi;
            g->ebp = ebp;
            g->esp = sp0 - 0x10u;
            t11 = cow_fastcall(g, COW_IMG(0x10110070u), ecx, edx, 1, 1u);
            t12 = g->ecx;
            t13 = g->edx;
            eax = t11;
            ecx = t12;
            edx = t13;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t14 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t15 = g->edx;
        if (ebx != 0u)
        {
            eax = t14;
            edx = t15;
            esi = ebx;
            goto L_1010f94f;
        }
        edx = t15;
    }
    wr32(ebp + 0x10u, ebp + 0x14u);
    wr32(ebp + 0x18u, ebp + 8u);
    wr16(ebp + 6u, 0u);
    wr32(ebp + 0x10u, 0u);
    if (rd32(ebp + 0x14u) == 0u)
    {
        eax = rd32(ebp + 0x14u);
        ecx = 0u;
        esi = ebp + 0x14u;
        edi = ebp + 8u;
    }
    else
    {
        eax = rd32(ebp + 0x14u);
        esi = ebp + 0x14u;
        edi = ebp + 8u;
        g->eax = eax;
        g->ecx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t16 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    wr32(esi, 0xefefefefu);
    if (rd32(esi + 8u) != 0u)
    {
        esi = rd32(esi + 8u);
        g->ebx = in_ebx;
        g->edi = edi;
        g->ebp = ebp;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t19 = cow_fastcall(g, COW_IMG(0x10110000u), esi, edx, 0);
        t20 = g->ecx;
        t21 = g->edx;
        g->ecx = t20;
        g->edx = t21;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t22 = g->ecx;
        t23 = g->edx;
        ecx = t22;
        edx = t23;
    }
    if (rd32(edi) == 0u)
    {
        eax = rd32(edi);
    }
    else
    {
        eax = rd32(edi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t24 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t25 = g->ecx;
        t26 = g->edx;
        eax = t24;
        ecx = t25;
        edx = t26;
    }
    wr32(edi, 0xefefefefu);
    if (rd32(edi + 8u) != 0u)
    {
        edi = rd32(edi + 8u);
        g->ebx = in_ebx;
        g->edi = edi;
        g->ebp = ebp;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t27 = cow_fastcall(g, COW_IMG(0x10110000u), edi, edx, 0);
        t28 = g->ecx;
        t29 = g->edx;
        g->ecx = t28;
        g->edx = t29;
        t30 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
    }
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebp);
    wr32(COW_IMG(0x104e1708u), 0u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_1010fa1f: ;
    wr32(COW_IMG(0x104e1708u), 0u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010f910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
