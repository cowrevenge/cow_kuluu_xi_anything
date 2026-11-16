/* f_0x103218eb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_103218eb(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(COW_IMG(0x109f9434u)) != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->esp = sp0 - 0xcu;
        t1 = cow_fastcall(g, COW_IMG(0x103156d7u), self, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    esi = rd32(COW_IMG(0x109b270cu));
    edi = 0u;
L_10321905: ;
    if (rd8(esi) == 0u) goto L_1032191d;
    eax = (eax & 0xffffff00u) | rd8(esi);
    if ((uint8_t)eax != 0x3du)
    {
        edi = edi + 1u;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, esi);
    t5 = g->edx;
    eax = t4;
    ecx = esi;
    edx = t5;
    esi = esi + t4 + 1u;
    goto L_10321905;
L_1032191d: ;
    t6 = edi * 4u + 4u;
    g->eax = t6;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t6, in_edi, in_esi);
    t8 = g->edx;
    wr32(COW_IMG(0x109b26e4u), t7);
    if (t7 != 0u)
    {
        eax = t7;
        ecx = t6;
        edx = t8;
        esi = t7;
    }
    else
    {
        eax = t7;
        ecx = t6;
        edx = t8;
        esi = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t9 = cow_cdecl(g, COW_IMG(0x1031680cu), 1, 9u);
        t10 = g->edx;
        eax = t9;
        ecx = 9u;
        edx = t10;
    }
    if (rd8(rd32(COW_IMG(0x109b270cu))) != 0u)
    {
        edi = rd32(COW_IMG(0x109b270cu));
L_1032194a: ;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, edi);
        t12 = g->edx;
        if (rd8(edi) == 0x3du)
        {
            eax = t11;
            ecx = edi;
            edx = t12;
            ebp = t11 + 1u;
        }
        else
        {
            eax = t11;
            ecx = edi;
            edx = t12;
            ebp = t11 + 1u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t13 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, ebp, in_ebp, in_edi);
            t14 = g->edx;
            wr32(esi, t13);
            if (t13 != 0u)
            {
                eax = t13;
                ecx = ebp;
                edx = t14;
            }
            else
            {
                eax = t13;
                ecx = ebp;
                edx = t14;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t15 = cow_cdecl(g, COW_IMG(0x1031680cu), 1, 9u);
                t16 = g->edx;
                eax = t15;
                ecx = 9u;
                edx = t16;
            }
            g->eax = eax;
            g->edx = edx;
            t17 = rd32(esi);
            g->esp = sp0 - 0xcu;
            t18 = cow_cdecl(g, COW_IMG(0x10317500u), 3, t17, edi, in_ebp);
            t19 = g->edx;
            eax = t18;
            ecx = edi;
            edx = t19;
            esi = esi + 4u;
        }
        if (rd8(ebp + edi) != 0u)
        {
            edi = ebp + edi;
            goto L_1032194a;
        }
    }
    t20 = rd32(COW_IMG(0x109b270cu));
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t20, in_edi, in_esi);
    wr32(COW_IMG(0x109b270cu), 0u);
    wr32(esi, 0u);
    wr32(COW_IMG(0x109f9430u), 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103218eb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103218eb(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
