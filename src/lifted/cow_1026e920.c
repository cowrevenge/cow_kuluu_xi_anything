/* f_0x1026e920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1026e920(Guest* g)
{
    uint32_t eax;
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027e0f0u), 1, COW_IMG(0x1099aee0u));
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(COW_IMG(0x1099aedcu)) == 0u)
    {
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        if ((int32_t)(rd32(COW_IMG(0x1099aed8u)) - 1u) >= 0)
        {
            eax = rd32(COW_IMG(0x1099aed8u)) - 1u;
            esi = eax * 0xc0u;
            edi = eax + 1u;
L_1026e94e: ;
            t3 = esi + rd32(COW_IMG(0x1099aedcu));
            g->eax = eax;
            g->ecx = rd32(COW_IMG(0x1099aedcu));
            g->edx = t3;
            t4 = rd32(COW_IMG(0x1099aedcu));
            g->esp = sp0 - 4u;
            t5 = cow_cdecl(g, COW_IMG(0x1027dba0u), 3, t3, in_edi, in_esi);
            t6 = g->ecx;
            t7 = g->edx;
            if (edi != 1u)
            {
                eax = t5;
                esi = esi - 0xc0u;
                edi = edi - 1u;
                goto L_1026e94e;
            }
            ecx = t6;
            edx = t7;
        }
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, rd32(COW_IMG(0x1099aedcu)), COW_IMG(0x103b17c0u), 0x63au);
        t8 = g->edx;
        wr32(COW_IMG(0x1099aedcu), 0u);
        wr32(COW_IMG(0x1099aed8u), 0u);
        edx = t8;
    }
    if ((int32_t)(rd32(COW_IMG(0x1099aeccu)) - 1u) < 0)
    {
        ecx = rd32(COW_IMG(0x1099aeccu));
    }
    else
    {
        edi = rd32(COW_IMG(0x1099aeccu)) - 1u;
        edx = edi * 0x15u;
        esi = edi * 0xacu;
L_1026e9ac: ;
        if (!(rd32(esi + rd32(COW_IMG(0x1099aed0u))) >> 8u & 1u))
        {
            eax = rd32(COW_IMG(0x1099aed0u));
            ecx = rd32(esi + rd32(COW_IMG(0x1099aed0u)));
            t9 = eax + esi + 0xa8u;
            g->eax = t9;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t10 = cow_cdecl(g, COW_IMG(0x10277ad0u), 1, t9);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
        }
        else
        {
            eax = rd32(COW_IMG(0x1099aed0u));
            ecx = rd32(esi + rd32(COW_IMG(0x1099aed0u)));
            wr32(eax + esi + 0xa8u, 0u);
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102706b0u), 1, edi);
        t13 = g->ecx;
        t14 = g->edx;
        if ((int32_t)(edi - 1u) >= 0)
        {
            edx = t14;
            esi = esi - 0xacu;
            edi = edi - 1u;
            goto L_1026e9ac;
        }
        ecx = t13;
        edx = t14;
    }
    if (rd32(COW_IMG(0x1099aed0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1099aed0u));
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b17c0u), 0x653u);
        wr32(COW_IMG(0x1099aed0u), 0u);
        wr32(COW_IMG(0x1099aeccu), 0u);
        wr32(COW_IMG(0x1099aec8u), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026e920(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
