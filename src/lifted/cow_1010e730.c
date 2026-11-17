/* f_0x1010e730 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Destroys a singly-linked node chain by releasing each node's payload, * marking the payload field dead, then releasing child nodes in reverse order.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */

static uint32_t cow_next_node_1010e730(uint32_t node)
{
    return rd32(node + 8u);
}

static uint32_t cow_count_chain_1010e730(uint32_t start)
{
    uint32_t count = 0u;
    uint32_t node = start;

    while (node != 0u)
    {
        ++count;
        node = cow_next_node_1010e730(node);
    }

    return count;
}

void cow_fn_1010e730(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    uint32_t node;
    uint32_t next;
    uint32_t i;
    uint32_t count;
    uint32_t stack_addr;

    /*
     * The original is recursive:
     *
     *   process node payload
     *   mark payload dead
     *   recursively process next
     *   free next
     *
     * To avoid host/prover recursion, collect the chain first, perform the
     * payload work in forward order, then perform the child frees in reverse
     * order.  This preserves the observable call order:
     *
     *   A0, B0, A1, B1, ..., Ak, Bk, C(nk), ..., C(n1).
     */

    count = cow_count_chain_1010e730(self);

    if (count == 0u)
    {
        g->esi = saved_esi;
        g->edi = saved_edi;
        return;
    }

    /*
     * Use guest memory for the temporary pointer stack.  The original's own
     * stack traffic below the returned ESP is not compared, and this buffer is
     * never passed to guest code.
     */
    stack_addr = cow_frame(g, sp0, count * 4u);

    /*
     * First pass: process payloads in the original forward order and save the
     * nodes that must later be freed.  The initial node itself is not freed by
     * this function; only child nodes reached through offset 8 are freed.
     */
    node = self;
    i = 0u;

    while (node != 0u)
    {
        uint32_t payload = rd32(node);

        if (payload != 0u)
        {
            /*
             * 1010e73a: lea ecx, [edi + 0x18]
             * 1010e73d: call 0x101090a0
             *
             * The callee returns with bare ret, so stack arguments are popped
             * by the caller.  There are no stack arguments; the first argument
             * is in ecx.
             */
            cow_thiscall_cdecl(g, COW_IMG(0x101090a0u), payload + 0x18u, 0u);

            /*
             * 1010e742: push edi
             * 1010e743: call 0x10311bf0
             * 1010e748: add esp, 4
             */
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, payload);
        }

        /*
         * 1010e74b: mov dword ptr [esi], 0xefefefef
         */
        wr32(node, 0xEFEFEFEFu);

        /*
         * 1010e751: mov esi, dword ptr [esi + 8]
         */
        next = cow_next_node_1010e730(node);

        /*
         * Save child nodes for the reverse-order free pass.  The original
         * calls thunk_FUN_10108600(next) after recursively processing next,
         * for every nonzero next encountered except the initial self.
         */
        if (next != 0u)
        {
            wr32(stack_addr + i * 4u, next);
            ++i;
        }

        node = next;
    }

    count = i;

    /*
     * Second pass: free child nodes in reverse order, matching the return
     * order of the original recursion.
     */
    while (count != 0u)
    {
        --count;

        next = rd32(stack_addr + count * 4u);

        /*
         * 1010e75f: push esi
         * 1010e760: call 0x101086b0
         * 1010e765: add esp, 4
         *
         * The thunk has no ret of its own; the call site pops one argument.
         */
        cow_cdecl(g, COW_IMG(0x101086b0u), 1u, next);
    }

    g->esi = saved_esi;
    g->edi = saved_edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010e730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_1010e730(g, self, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
