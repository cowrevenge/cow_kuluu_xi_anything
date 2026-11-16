/* f_0x102b7320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b7320(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(arg2 + 0x24u, 0u);
    wr32(sp0 - 4u, 0u);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = self;
        edi = 0u;
    }
    else
    {
        eax = rd32(arg1 + 0x34u);
        ecx = rd32(arg1 + 0x44u);
        edi = rd32(eax + rd32(arg1 + 0x44u) * 4u + 0x54u);
    }
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x102b7440u), 3, edi, arg2, in_edi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, edi);
        g->eax = sp0 - 4u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t9 = cow_cdecl(g, COW_IMG(0x102b74a0u), 3, edi, arg2, sp0 - 4u);
        t10 = g->ecx;
        t11 = g->edx;
        t12 = ((uint8_t)t9 != 0u) + 1u;
        wr32(arg2 + 0x24u, t12);
        eax = rd32(sp0 - 4u);
        ecx = t10;
        edx = t11;
    }
    else
    {
        eax = t1;
        ecx = t2;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, edi);
        g->eax = eax;
        g->edx = sp0 - 4u;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x102b7470u), 3, edi, arg2, sp0 - 4u);
        t5 = g->edx;
        if ((uint8_t)t4 == 0u)
        {
            edx = t5;
            eax = 0u;
            ecx = arg2 + 0x10u;
L_102b73d9: ;
            if (rd32(ecx) == 0u) goto L_102b73f4;
            if ((int32_t)(eax + 1u) < 4)
            {
                eax = eax + 1u;
                ecx = ecx + 4u;
                goto L_102b73d9;
            }
            ecx = ecx + 4u;
            t8 = rd32(sp0 - 4u);
            wr32(arg2 + 0x24u, 3u);
            eax = t8;
        }
        else
        {
            if (rd32(edi + rd32(arg2 + rd32(COW_IMG(0x103c7b60u) + rd32(sp0 - 4u) * 4u) * 4u) * 4u) == 3u)
            {
                eax = rd32(sp0 - 4u);
                goto L_102b73a3;
            }
            eax = rd32(sp0 - 4u);
            ecx = rd32(edi + rd32(arg2 + rd32(COW_IMG(0x103c7b60u) + rd32(sp0 - 4u) * 4u) * 4u) * 4u);
            wr32(sp0 - 0x14u, in_ebp);
            if (rd32(edi + rd32(arg2 + rd32(COW_IMG(0x103c7b80u) + eax * 4u) * 4u) * 4u) != 3u) goto L_102b739e;
            edx = rd32(arg2 + rd32(COW_IMG(0x103c7b80u) + eax * 4u) * 4u);
            wr32(arg2 + 0x24u, 5u);
        }
    }
L_102b741e: ;
    if (eax != 0u)
    {
        wr32(sp0 - 0x14u, eax);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, arg1);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102b74d0u), 3, arg1, arg2, eax);
    }
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_102b739e: ;
    if (ecx != 3u) goto L_102b73bc;
L_102b73a3: ;
    if (rd32(edi + rd32(arg2 + rd32(COW_IMG(0x103c7b80u) + eax * 4u) * 4u) * 4u) == 3u) goto L_102b73bc;
    ecx = rd32(COW_IMG(0x103c7b80u) + eax * 4u);
    edx = rd32(arg2 + rd32(COW_IMG(0x103c7b80u) + eax * 4u) * 4u);
    wr32(arg2 + 0x24u, 6u);
    goto L_102b741e;
L_102b73bc: ;
    t6 = (-(rd32(edi + rd32(arg2 + eax * 4u) * 4u) != 4u) & 3u) + 4u;
    t7 = rd32(arg2 + eax * 4u);
    wr32(arg2 + 0x24u, t6);
    ecx = t7;
    edx = t6;
    goto L_102b741e;
L_102b73f4: ;
    wr32(sp0 - 4u, eax);
    wr32(arg2 + 0x24u, 3u);
    loc_4 = eax;
    goto L_102b741e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b7320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b7320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
