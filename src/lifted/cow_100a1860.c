/* f_0x100a1860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a1860(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_74;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x78u, in_ebx);
    wr32(sp0 - 0x7cu, in_esi);
    wr32(sp0 - 0x80u, in_edi);
    eax = COW_IMG(0x10488d08u);
    edx = sp0 - 0x70u;
    loc_74 = rd32(sp0 - 0x74u) & 0xff000000u;
L_100a187d: ;
    esi = eax;
    edi = edx;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)(eax + 0x100u) < (int32_t)COW_IMG(0x10488f08u))
    {
        eax = eax + 0x100u;
        edx = edx + 0x18u;
        goto L_100a187d;
    }
    eax = eax + 0x100u;
    edx = edx + 0x18u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t1 = cow_stdcall(g, COW_IMG(0x100a0080u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint32_t)(int16_t)t1 == 0u)
    {
        eax = (uint32_t)(int16_t)t1;
    }
    else
    {
        eax = (uint32_t)(int16_t)t1;
        ecx = t2;
        edx = t3;
        wr16(COW_IMG(0x10482f40u), (uint16_t)eax);
        wr16(COW_IMG(0x104855aau), (uint16_t)eax);
        wr32(COW_IMG(0x10487020u), 0u);
        wr32(sp0 - 0x84u, arg1);
        wr32(COW_IMG(0x10487024u), 0u);
        wr32(sp0 - 0x88u, 6u);
        wr32(COW_IMG(0x10487028u), 0u);
        t4 = rd32(sp0 - 0x74u);
        wr32(COW_IMG(0x1048702cu), 0u);
        g->ecx = ecx;
        g->esp = sp0 - 0x80u;
        t5 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 6u, arg1);
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
        }
        else
        {
            ecx = t6;
            edx = t7;
            esi = t5;
            wr32(sp0 - 0x84u, arg1);
            g->esp = sp0 - 0x80u;
            t8 = cow_thiscall_cdecl(g, COW_IMG(0x100a19b0u), ecx, 1, arg1);
            if ((uint8_t)t8 != 0u)
            {
                eax = t8;
            }
            else
            {
                if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(COW_IMG(0x10482f40u)) * 4u) + 0x210u) == 0u)
                {
                    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(COW_IMG(0x10482f40u)) * 4u);
                    ecx = (uint16_t)rd32(COW_IMG(0x10482f40u));
                    eax = eax + 0x7cu;
                }
                else
                {
                    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(COW_IMG(0x10482f40u)) * 4u);
                    ecx = (uint16_t)rd32(COW_IMG(0x10482f40u));
                    eax = eax + 0x214u;
                }
                wr32(sp0 - 0x84u, eax);
                wr32(sp0 - 0x88u, COW_IMG(0x1035bb48u));
                wr32(sp0 - 0x8cu, sp0 - 0x40u);
                g->ebx = 0u;
                g->esp = sp0 - 0x78u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1035bb48u), eax, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu));
                if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(COW_IMG(0x10482f40u)) * 4u) + 0x210u) == 0u)
                {
                    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(COW_IMG(0x10482f40u)) * 4u);
                    eax = eax + 0x7cu;
                }
                else
                {
                    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(COW_IMG(0x10482f40u)) * 4u);
                    eax = eax + 0x214u;
                }
                wr32(sp0 - 0x84u, eax);
                wr32(sp0 - 0x88u, 0u);
                wr32(sp0 - 0x8cu, 0u);
                wr32(sp0 - 0x90u, sp0 - 0x74u);
                wr32(sp0 - 0x94u, 1u);
                wr32(sp0 - 0x98u, esi);
                wr32(sp0 - 0x9cu, sp0 - 0x40u);
                g->esp = sp0 - 0x80u;
                cow_call_regs(g, COW_IMG(0x100ad660u), eax, sp0 - 0x74u, sp0 - 0x40u, 1, 7, sp0 - 0x40u, esi, 1u, sp0 - 0x74u, 0u, 0u, eax);
                eax = COW_IMG(0x10488d08u);
                edx = sp0 - 0x70u;
L_100a1980: ;
                esi = edx;
                edi = eax;
                ecx = 6u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                if ((int32_t)(eax + 0x100u) < (int32_t)COW_IMG(0x10488f08u))
                {
                    eax = eax + 0x100u;
                    edx = edx + 0x18u;
                    goto L_100a1980;
                }
                eax = eax + 0x100u;
            }
        }
    }
    g->ebx = rd32(sp0 - 0x78u);
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a1860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a1860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
